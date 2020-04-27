/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:56:20 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 13:45:46 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void			ft_start_wolf(t_wlf *wlf)
{
	int			**tab;

	tab = ft_parse(wlf->init_map, wlf);
	wlf->parse->tab = tab;
	ft_parse_create_tab(wlf->init_map, tab, wlf);
	ft_draw_all(wlf);
	mlx_hook(wlf->use->win, 2, 0, ft_move_select_key, wlf);
	mlx_hook(wlf->use->win, 6, 0, ft_move_mouse, wlf);
}

void			ft_restart(t_wlf *wlf)
{
	wlf->select_map = 0;
	wlf->menu = 1;
	wlf->mode = 0;
	mlx_destroy_window(wlf->use->mlx, wlf->use->win);
	ft_raycast_init_value_base(wlf);
	wlf->use->mlx = mlx_init();
	wlf->use->win = mlx_new_window(wlf->use->mlx, 1000, 1000, "wolf3d");
	wlf->use->img = mlx_new_image(wlf->use->mlx, 1000, 1000);
	ft_menu_map_1(wlf);
	mlx_hook(wlf->use->win, 2, 0, ft_menu_init, wlf);
	mlx_loop(wlf->use->mlx);
}
