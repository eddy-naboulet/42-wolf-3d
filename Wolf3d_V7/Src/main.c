/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/16 18:00:18 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/31 12:53:43 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

int				main(void)
{
	t_wlf		*wlf;

	wlf = ft_memalloc(sizeof(t_wlf));
	wlf->use = ft_memalloc(sizeof(t_use));
	wlf->parse = ft_memalloc(sizeof(t_parse));
	wlf->clr = ft_memalloc(sizeof(t_clr));
	ft_init_value_wolf_base(wlf);
	wlf->use->mlx = mlx_init();
	wlf->use->win = mlx_new_window(wlf->use->mlx, 1000, 1000, "wolf3d");
	wlf->use->img = mlx_new_image(wlf->use->mlx, 1000, 1000);
	ft_main_menu_wolf(wlf);
	mlx_hook(wlf->use->win, 2, 0, ft_init_menu_wolf, wlf);
	mlx_loop(wlf->use->mlx);
}

void			ft_start_wolf(t_wlf *wlf)
{
	int			**tab;

	tab = ft_parsing_wolf(wlf->init_map, wlf);
	wlf->parse->tab = tab;
	ft_create_tab_wolf(wlf->init_map, tab, wlf);
	ft_draw_all(wlf);
	mlx_hook(wlf->use->win, 2, 0, ft_select_move_wolf, wlf);
	mlx_hook(wlf->use->win, 6, 0, ft_move_wolf_mouse, wlf);
}

void			ft_restart(t_wlf *wlf)
{
	wlf->select_map = 0;
	wlf->menu = 1;
	wlf->mode = 0;
	mlx_destroy_window(wlf->use->mlx, wlf->use->win);
	ft_init_value_wolf_base(wlf);
	wlf->use->mlx = mlx_init();
	wlf->use->win = mlx_new_window(wlf->use->mlx, 1000, 1000, "wolf3d");
	wlf->use->img = mlx_new_image(wlf->use->mlx, 1000, 1000);
	ft_map_menu_wolf(wlf);
	mlx_hook(wlf->use->win, 2, 0, ft_init_menu_wolf, wlf);
	mlx_loop(wlf->use->mlx);
}
