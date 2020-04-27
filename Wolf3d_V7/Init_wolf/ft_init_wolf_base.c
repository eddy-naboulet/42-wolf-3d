/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_wolf_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 17:08:42 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/31 15:12:56 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

void		ft_init_value_wolf_base(t_wlf *wlf)
{
	wlf->width = 1000;
	wlf->height = 1000;
	wlf->start_pos_x = 2;
	wlf->start_pos_y = 2;
	wlf->vd_x = -1;
	wlf->vd_y = 0;
	wlf->plane_x = 0;
	wlf->plane_y = 0.66;
	wlf->time_1 = 0;
	wlf->oldtime = 0;
}
