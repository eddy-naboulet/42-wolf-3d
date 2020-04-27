/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_direction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 09:26:49 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 09:51:26 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

void	ft_draw_direction(t_wlf *wlf)
{
	if (wlf->mur_verti_hori == 0 && wlf->ray_dir_x > 0)
	{
		wlf->clr->r_w = 255;
		wlf->clr->g_w = 0;
		wlf->clr->b_w = 0;
	}
	if (wlf->mur_verti_hori == 0 && wlf->ray_dir_x < 0)
	{
		wlf->clr->r_w = 0;
		wlf->clr->g_w = 0;
		wlf->clr->b_w = 255;
	}
	if (wlf->mur_verti_hori == 1 && wlf->ray_dir_y > 0)
	{
		wlf->clr->r_w = 0;
		wlf->clr->g_w = 255;
		wlf->clr->b_w = 0;
	}
	if (wlf->mur_verti_hori == 1 && wlf->ray_dir_y < 0)
	{
		wlf->clr->r_w = 255;
		wlf->clr->g_w = 127;
		wlf->clr->b_w = 0;
	}
}
