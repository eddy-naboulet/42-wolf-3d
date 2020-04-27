/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_menu_wolf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 09:05:02 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/30 14:14:01 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

void	ft_main_menu_wolf(t_wlf *wlf)
{
	wlf->xpm = mlx_xpm_file_to_image(wlf->use->mlx, "Img_wolf/back_menu.xpm",
		&wlf->h, &wlf->l);
	mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->xpm, 0, 0);
	wlf->xpm = mlx_xpm_file_to_image(wlf->use->mlx, "Img_wolf/start_2.xpm",
		&wlf->h, &wlf->l);
	mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->xpm, 0, 550);
	mlx_destroy_image(wlf->use->mlx, wlf->xpm);
	wlf->xpm = mlx_xpm_file_to_image(wlf->use->mlx, "Img_wolf/quit_1.xpm",
		&wlf->h, &wlf->l);
	mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, wlf->xpm, 0, 610);
	mlx_destroy_image(wlf->use->mlx, wlf->xpm);
}

void	ft_start_quit_menu_wolf(t_wlf *wlf)
{
	void *xpm;

	if (wlf->select == 1)
	{
		xpm = mlx_xpm_file_to_image(wlf->use->mlx, "Img_wolf/start_1.xpm",
			&wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, xpm, 0, 550);
		mlx_destroy_image(wlf->use->mlx, xpm);
		xpm = mlx_xpm_file_to_image(wlf->use->mlx, "Img_wolf/quit_2.xpm",
			&wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, xpm, 0, 610);
		mlx_destroy_image(wlf->use->mlx, xpm);
	}
	if (wlf->select == 2)
	{
		xpm = mlx_xpm_file_to_image(wlf->use->mlx, "Img_wolf/start_2.xpm",
			&wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, xpm, 0, 550);
		mlx_destroy_image(wlf->use->mlx, xpm);
		xpm = mlx_xpm_file_to_image(wlf->use->mlx, "Img_wolf/quit_1.xpm",
			&wlf->h, &wlf->l);
		mlx_put_image_to_window(wlf->use->mlx, wlf->use->win, xpm, 0, 610);
		mlx_destroy_image(wlf->use->mlx, xpm);
	}
}
