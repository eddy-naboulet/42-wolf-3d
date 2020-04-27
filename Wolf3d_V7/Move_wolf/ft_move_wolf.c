/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_wolf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/21 10:11:19 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/31 08:48:37 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

int		ft_select_move_wolf(int keycode, t_wlf *wlf)
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
		ft_strafing_left(wlf);
	if (keycode == 2)
		ft_strafing_right(wlf);
	if (keycode == 51)
	{
		ft_restart(wlf);
	}
	if (keycode == 53)
		exit(1);
	ft_restart_draw(wlf);
	return (0);
}
