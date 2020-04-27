/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:55:35 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 16:20:42 by enaboule         ###   ########.fr       */
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
	ft_raycast_init_value_base(wlf);
	wlf->use->mlx = mlx_init();
	wlf->use->win = mlx_new_window(wlf->use->mlx, 1000, 1000, "wolf3d");
	wlf->use->img = mlx_new_image(wlf->use->mlx, 1000, 1000);
	ft_menu_main_1(wlf);
	ft_parse("maps/level_1.wolf", wlf);
	mlx_hook(wlf->use->win, 2, 0, ft_menu_init, wlf);
	mlx_loop(wlf->use->mlx);
}
