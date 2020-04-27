/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_key_select.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 09:39:41 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 10:37:23 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

int		ft_move_select_key(int keycode, t_wlf *wlf)
{
	if (wlf->mode == 1)
		wlf->movespeed = 0.102;
	else
		wlf->movespeed = 0.602;
	wlf->movespeed_straf = 0.102;
	if (keycode == 13)
		ft_move_front(wlf);
	if (keycode == 1)
		ft_move_back(wlf);
	if (keycode == 0)
		ft_move_left(wlf);
	if (keycode == 2)
		ft_move_right(wlf);
	if (keycode == 51)
	{
		ft_restart(wlf);
	}
	if (keycode == 53)
		exit(1);
	ft_draw_restart(wlf);
	return (0);
}
