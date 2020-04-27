/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_wolf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 16:21:06 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/31 13:24:02 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

void		ft_select_draw(t_wlf *wlf)
{
	wlf->x_draw = wlf->x;
	wlf->y_draw = 0;
	while (wlf->y_draw < wlf->draw_start && wlf->y_draw < 1000 && wlf->y_draw >= 0)
	{
		ft_draw_sky(wlf);
		wlf->y_draw++;
	}
	wlf->y_draw = wlf->draw_start;
	while (wlf->y_draw < wlf->draw_end && wlf->y_draw < 1000 && wlf->y_draw >= 0)
	{
		ft_draw_wall(wlf);
		wlf->y_draw++;
	}
	wlf->y_draw = wlf->draw_end;
	while (wlf->y_draw < wlf->height && wlf->y_draw < 1000 && wlf->y_draw >= 0)
	{
		ft_draw_ground(wlf);
		wlf->y_draw++;
	}
}

void		ft_draw_sky(t_wlf *wlf)
{
	int		index;

	index = wlf->x_draw * wlf->use->bpp / 8 +
		(wlf->y_draw * wlf->use->sizeline);
	wlf->use->data[index] = 255;
	wlf->use->data[index + 1] = 255;
	wlf->use->data[index + 2] = 255;
}

void		ft_draw_wall(t_wlf *wlf)
{
	int		index;

	index = wlf->x_draw * wlf->use->bpp / 8 +
		(wlf->y_draw * wlf->use->sizeline);
	wlf->use->data[index] = wlf->clr->b_w;
	wlf->use->data[index + 1] = wlf->clr->g_w;
	wlf->use->data[index + 2] = wlf->clr->r_w;
}

void		ft_draw_ground(t_wlf *wlf)
{
	int		index;

	index = wlf->x_draw * wlf->use->bpp / 8 +
		(wlf->y_draw * wlf->use->sizeline);
	wlf->use->data[index] = 255;
	wlf->use->data[index + 1] = 255;
	wlf->use->data[index + 2] = 255;
}
