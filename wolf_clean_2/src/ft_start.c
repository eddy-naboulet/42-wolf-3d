/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:56:20 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/02 09:24:26 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void			ft_start_wolf(t_wlf *wlf)
{
	wlf->parse->tab = NULL;
	wlf->parse->tab = ft_parse(wlf->init_map, wlf);
	ft_draw_all(wlf);
	mlx_hook(wlf->use->win, 2, 0, ft_move_select_key, wlf);
	mlx_hook(wlf->use->win, 6, 0, ft_move_mouse, wlf);
}

void			ft_restart(t_wlf *wlf)
{
	wlf->select_map = 0;
	wlf->menu = 1;
	wlf->mode = 0;
	while (wlf->parse->tab[wlf->parse->y])
	{
		free(wlf->parse->tab[wlf->parse->y]);
		while(wlf->parse->tab[wlf->parse->y][wlf->parse->x])
		{
			wlf->parse->x++;
			free(wlf->parse->tab[wlf->parse->x]);
		}
		wlf->parse->x = 0;
		wlf->parse->y++;
	}
	free(wlf->parse->tab);
	mlx_destroy_window(wlf->use->mlx, wlf->use->win);
	ft_raycast_init_value_base(wlf);
	wlf->use->mlx = mlx_init();
	wlf->use->win = mlx_new_window(wlf->use->mlx, 1000, 1000, "wolf3d");
	wlf->use->img = mlx_new_image(wlf->use->mlx, 1000, 1000);
	ft_menu_map_1(wlf);
	mlx_hook(wlf->use->win, 2, 0, ft_menu_init, wlf);
	mlx_loop(wlf->use->mlx);
}
