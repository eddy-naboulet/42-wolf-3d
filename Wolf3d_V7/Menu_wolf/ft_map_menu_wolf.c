/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_menu_wolf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 14:12:21 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 15:23:09 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

void		ft_map_menu_2(t_wlf *wlf)
{
	if (wlf->select_map == 3)
	{
		wlf->xpm = mlx_xpm_file_to_image(wlf->use->mlx,
			"Img_wolf/level_2.xpm", &wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->xpm, 0, 0);
		mlx_destroy_image(wlf->use->mlx, wlf->xpm);
	}
	if (wlf->select_map == 4)
	{
		wlf->xpm = mlx_xpm_file_to_image(wlf->use->mlx,
			"Img_wolf/level_3.xpm", &wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->xpm, 0, 0);
		mlx_destroy_image(wlf->use->mlx, wlf->xpm);
	}
}

void		ft_map_menu_1(t_wlf *wlf)
{
	if (wlf->select_map == 0)
	{
		wlf->xpm = mlx_xpm_file_to_image(wlf->use->mlx,
			"Img_wolf/back_menu_map.xpm", &wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->xpm, 0, 0);
		mlx_destroy_image(wlf->use->mlx, wlf->xpm);
	}
	if (wlf->select_map == 1)
	{
		wlf->xpm = mlx_xpm_file_to_image(wlf->use->mlx,
			"Img_wolf/level_1.xpm", &wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->xpm, 0, 0);
		mlx_destroy_image(wlf->use->mlx, wlf->xpm);
	}
	if (wlf->select_map == 2)
	{
		wlf->xpm = mlx_xpm_file_to_image(wlf->use->mlx,
			"Img_wolf/back_menu_map.xpm", &wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->xpm, 0, 0);
		mlx_destroy_image(wlf->use->mlx, wlf->xpm);
	}
	ft_map_menu_2(wlf);
}
