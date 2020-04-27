/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_wolf_mouse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 09:54:03 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/30 14:19:45 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

int				ft_move_wolf_mouse(int x, int y, t_wlf *wlf)
{
	double		old_dir_x;
	double		old_plane_x;
	double		rotspeed;
	static int	old_x = 500;

	(void)y;
	rotspeed = -((x - old_x) / 250.00000);
	old_plane_x = wlf->plane_x;
	old_dir_x = wlf->vd_x;
	wlf->vd_x = wlf->vd_x * cos(rotspeed) - wlf->vd_y * sin(rotspeed);
	wlf->vd_y = old_dir_x * sin(rotspeed) + wlf->vd_y * cos(rotspeed);
	wlf->plane_x = wlf->plane_x * cos(rotspeed) - wlf->plane_y *
		sin(rotspeed);
	wlf->plane_y = old_plane_x * sin(rotspeed) + wlf->plane_y *
		cos(rotspeed);
	old_x = x;
	ft_restart_draw(wlf);
	return (0);
}
