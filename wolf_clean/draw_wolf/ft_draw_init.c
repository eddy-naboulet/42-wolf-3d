/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 09:23:31 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 13:26:05 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

int			ft_draw_all(t_wlf *wlf)
{
	wlf->x = 0;
	while (wlf->x < wlf->width)
	{
		ft_raycast_all(wlf, wlf->parse->tab);
		ft_draw_init(wlf);
		wlf->x++;
	}
	mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->use->img, 0, 0);
	return (0);
}

int			ft_draw_init(t_wlf *wlf)
{
	wlf->use->data = mlx_get_data_addr(wlf->use->img, &wlf->use->bpp,
		&wlf->use->sizeline, &wlf->use->endian);
	if (wlf->mode == 1)
		ft_draw_direction(wlf);
	else
		ft_color_map_1(wlf);
	ft_draw_select(wlf);
	return (0);
}

int			ft_draw_restart(t_wlf *wlf)
{
	//mlx_destroy_image(wlf->use->mlx, wlf->use->img);
	wlf->use->img = mlx_new_image(wlf->use->mlx, 1000, 1000);
	ft_draw_all(wlf);
	return (0);
}
