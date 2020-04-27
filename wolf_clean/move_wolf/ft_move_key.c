/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 09:36:39 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 09:59:34 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

void		ft_move_front(t_wlf *wlf)
{
	if (!(wlf->parse->tab[(int)(wlf->start_pos_x + wlf->vd_x * wlf->movespeed)]
		[(int)wlf->start_pos_y]))
		wlf->start_pos_x += wlf->vd_x * wlf->movespeed;
	if (!(wlf->parse->tab[(int)wlf->start_pos_x][(int)(wlf->start_pos_y +
		wlf->vd_y * wlf->movespeed)]))
		wlf->start_pos_y += wlf->vd_y * wlf->movespeed;
}

void		ft_move_back(t_wlf *wlf)
{
	if (!(wlf->parse->tab[(int)(wlf->start_pos_x - wlf->vd_x * wlf->movespeed)]
		[(int)wlf->start_pos_y]))
		wlf->start_pos_x -= wlf->vd_x * wlf->movespeed;
	if (!(wlf->parse->tab[(int)wlf->start_pos_x]
		[(int)(wlf->start_pos_y - wlf->vd_y * wlf->movespeed)]))
		wlf->start_pos_y -= wlf->vd_y * wlf->movespeed;
}

void		ft_move_left(t_wlf *wlf)
{
	if (!(wlf->parse->tab[(int)(wlf->start_pos_x - wlf->plane_x *
		wlf->movespeed_straf)][(int)wlf->start_pos_y]))
		wlf->start_pos_x -= wlf->plane_x * wlf->movespeed_straf;
	if (!(wlf->parse->tab[(int)wlf->start_pos_x][(int)(wlf->start_pos_y -
		wlf->plane_y * wlf->movespeed_straf)]))
		wlf->start_pos_y -= wlf->plane_y * wlf->movespeed_straf;
}

void		ft_move_right(t_wlf *wlf)
{
	if (!(wlf->parse->tab[(int)(wlf->start_pos_x + wlf->plane_x *
		wlf->movespeed_straf)][(int)wlf->start_pos_y]))
		wlf->start_pos_x += wlf->plane_x * wlf->movespeed_straf;
	if (!(wlf->parse->tab[(int)wlf->start_pos_x][(int)(wlf->start_pos_y +
		wlf->plane_y * wlf->movespeed_straf)]))
		wlf->start_pos_y += wlf->plane_y * wlf->movespeed_straf;
}
