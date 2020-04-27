/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menu_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:22:29 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 11:59:41 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

void	ft_menu_main_1(t_wlf *wlf)
{
	wlf->xpm = mlx_xpm_file_to_image(wlf->use->mlx, "img_wolf/back_menu.xpm",
		&wlf->h, &wlf->l);
	mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->xpm, 0, 0);
	wlf->xpm = mlx_xpm_file_to_image(wlf->use->mlx, "img_wolf/start_2.xpm",
		&wlf->h, &wlf->l);
	mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->xpm, 0, 550);
	mlx_destroy_image(wlf->use->mlx, wlf->xpm);
	wlf->xpm = mlx_xpm_file_to_image(wlf->use->mlx, "img_wolf/quit_1.xpm",
		&wlf->h, &wlf->l);
	mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->xpm, 0, 610);
	mlx_destroy_image(wlf->use->mlx, wlf->xpm);
}

void	ft_menu_main_2(t_wlf *wlf)
{
	void *xpm;

	if (wlf->select == 1)
	{
		xpm = mlx_xpm_file_to_image(wlf->use->mlx, "img_wolf/start_1.xpm",
			&wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, xpm, 0, 550);
		mlx_destroy_image(wlf->use->mlx, xpm);
		xpm = mlx_xpm_file_to_image(wlf->use->mlx, "img_wolf/quit_2.xpm",
			&wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, xpm, 0, 610);
		mlx_destroy_image(wlf->use->mlx, xpm);
	}
	if (wlf->select == 2)
	{
		xpm = mlx_xpm_file_to_image(wlf->use->mlx, "img_wolf/start_2.xpm",
			&wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, xpm, 0, 550);
		mlx_destroy_image(wlf->use->mlx, xpm);
		xpm = mlx_xpm_file_to_image(wlf->use->mlx, "img_wolf/quit_1.xpm",
			&wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, xpm, 0, 610);
		mlx_destroy_image(wlf->use->mlx, xpm);
	}
}
