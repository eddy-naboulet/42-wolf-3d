/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 13:25:10 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 13:25:19 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../src/wolf.h"

void 	ft_color_map_1(t_wlf *wlf)
{
	wlf->clr->r_w = 0;
	wlf->clr->g_w = 0;
	wlf->clr->b_w = 0;

	if (wlf->parse->tab[wlf->map_x][wlf->map_y] != 999)
	{
		if (wlf->parse->tab[wlf->map_x][wlf->map_y] <= 255)
			wlf->clr->r_w = wlf->parse->tab[wlf->map_x][wlf->map_y];
		if (wlf->parse->tab[wlf->map_x][wlf->map_y] > 255 && wlf->parse->tab[wlf->map_x][wlf->map_y] <= 510)
		{
			wlf->clr->g_w = wlf->parse->tab[wlf->map_x][wlf->map_y];
			wlf->clr->r_w = 255;

		}
		if (wlf->parse->tab[wlf->map_x][wlf->map_y] > 510 && wlf->parse->tab[wlf->map_x][wlf->map_y] <= 765)
		{
			wlf->clr->r_w--;;
			wlf->clr->g_w = 255;

		}
		/*if (wlf->parse->tab[wlf->map_x][wlf->map_y] > 765)
		{
			wlf->clr->b_w += ((wlf->parse->tab[wlf->map_x][wlf->map_y] - wlf->parse->tab[wlf->map_x][wlf->map_y]));
			wlf->clr->g_w = 255;
		}*/
	}
}
