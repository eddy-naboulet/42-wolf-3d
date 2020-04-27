/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raycast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 09:04:59 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 09:56:49 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

void		ft_raycast_all(t_wlf *wlf, int **tab)
{
	ft_raycast_init_value(wlf);
	ft_raycast_etape(wlf);
	ft_raycast_wall(wlf, tab);
	ft_raycast_cam(wlf);
}

void		ft_raycast_init_value(t_wlf *wlf)
{
	wlf->camera_x = 2 * wlf->x / (double)wlf->width - 1;
	wlf->ray_pos_x = wlf->start_pos_x;
	wlf->ray_pos_y = wlf->start_pos_y;
	wlf->ray_dir_x = wlf->vd_x + wlf->plane_x * wlf->camera_x;
	wlf->ray_dir_y = wlf->vd_y + wlf->plane_y * wlf->camera_x;
	wlf->map_x = (int)wlf->ray_pos_x;
	wlf->map_y = (int)wlf->ray_pos_y;
	wlf->dist_mur_x_2 = sqrt(1 + (wlf->ray_dir_y * wlf->ray_dir_y) /
		(wlf->ray_dir_x * wlf->ray_dir_x));
	wlf->dist_mur_y_2 = sqrt(1 + (wlf->ray_dir_x * wlf->ray_dir_x) /
		(wlf->ray_dir_y * wlf->ray_dir_y));
	wlf->touche = 0;
}

void		ft_raycast_etape(t_wlf *wlf)
{
	if (wlf->ray_dir_x < 0)
	{
		wlf->etape_x = -1;
		wlf->dist_mur_x = (wlf->ray_pos_x - wlf->map_x) * wlf->dist_mur_x_2;
	}
	else
	{
		wlf->etape_x = 1;
		wlf->dist_mur_x = (wlf->map_x + 1.0 - wlf->ray_pos_x) *
			wlf->dist_mur_x_2;
	}
	if (wlf->ray_dir_y < 0)
	{
		wlf->etape_y = -1;
		wlf->dist_mur_y = (wlf->ray_pos_y - wlf->map_y) * wlf->dist_mur_y_2;
	}
	else
	{
		wlf->etape_y = 1;
		wlf->dist_mur_y = (wlf->map_y + 1.0 - wlf->ray_pos_y) *
			wlf->dist_mur_y_2;
	}
}

void		ft_raycast_wall(t_wlf *wlf, int **tab)
{
	while (wlf->touche == 0)
	{
		if (wlf->dist_mur_x < wlf->dist_mur_y)
		{
			wlf->dist_mur_x += wlf->dist_mur_x_2;
			wlf->map_x += wlf->etape_x;
			wlf->mur_verti_hori = 0;
		}
		else
		{
			wlf->dist_mur_y += wlf->dist_mur_y_2;
			wlf->map_y += wlf->etape_y;
			wlf->mur_verti_hori = 1;
		}
		if (tab[wlf->map_x][wlf->map_y] > 0)
			wlf->touche = 1;
	}
}

void		ft_raycast_cam(t_wlf *wlf)
{
	wlf->draw_start = 0;
	if (wlf->mur_verti_hori == 0)
		wlf->longeur_mur = fabs((wlf->map_x - wlf->ray_pos_x +
			(1 - wlf->etape_x) / 2) / wlf->ray_dir_x);
	else
		wlf->longeur_mur = fabs((wlf->map_y - wlf->ray_pos_y +
			(1 - wlf->etape_y) / 2) / wlf->ray_dir_y);
	wlf->hauteur_mur = abs((int)(wlf->height / wlf->longeur_mur));
	wlf->draw_start = (-wlf->hauteur_mur / 2 + wlf->height / 2);
	if (wlf->draw_start < 0)
		wlf->draw_start = 0;
	wlf->draw_end = wlf->hauteur_mur / 2 + wlf->height / 2;
	if (wlf->draw_end >= wlf->height)
		wlf->draw_end = wlf->height - 1;
}
