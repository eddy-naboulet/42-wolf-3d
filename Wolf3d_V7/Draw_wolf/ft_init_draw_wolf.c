/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_draw_wolf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 09:52:32 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/31 12:40:55 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

int			ft_draw_all(t_wlf *wlf)
{
	wlf->x = 0;
	while (wlf->x < wlf->width)
	{
		ft_ray_cast_wolf(wlf, wlf->parse->tab);
		ft_init_draw(wlf);
		wlf->x++;
	}
	mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->use->img, 0, 0);
	return (0);
}

int			ft_init_draw(t_wlf *wlf)
{
	wlf->use->data = mlx_get_data_addr(wlf->use->img, &wlf->use->bpp,
		&wlf->use->sizeline, &wlf->use->endian);
	if (wlf->mode == 1)
	{
		ft_init_direction(wlf);
	}
	else
		ft_color_map_1(wlf);
	ft_select_draw(wlf);
	return (0);
}

int			ft_restart_draw(t_wlf *wlf)
{
	//mlx_destroy_image(wlf->use->mlx, wlf->use->img);
	wlf->use->img = mlx_new_image(wlf->use->mlx, 1000, 1000);
	ft_draw_all(wlf);
	return (0);
}
