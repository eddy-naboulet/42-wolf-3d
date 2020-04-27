/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raycast_init_value.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 09:06:16 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 11:51:10 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

void		ft_raycast_init_value_base(t_wlf *wlf)
{
	wlf->width = 1000;
	wlf->height = 1000;
	wlf->start_pos_x = 2;
	wlf->start_pos_y = 2;
	wlf->vd_x = -1;
	wlf->vd_y = 0;
	wlf->plane_x = 0;
	wlf->plane_y = 0.66;
}
