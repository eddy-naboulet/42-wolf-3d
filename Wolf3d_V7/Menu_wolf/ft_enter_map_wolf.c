/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enter_map_wolf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 14:49:45 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/30 14:12:12 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

int		ft_enter_map(t_wlf *wlf)
{
	if (wlf->select_map == 1)
	{
		wlf->init_map = "Maps/level_1.wolf";
		ft_start_wolf(wlf);
	}
	if (wlf->select_map == 2)
	{
		wlf->init_map = "Maps/demo_1.wolf";
		wlf->mode = 1;
		ft_start_wolf(wlf);
	}
	if (wlf->select_map == 3)
	{
		wlf->init_map = "Maps/level_2.wolf";
		ft_start_wolf(wlf);
	}
	if (wlf->select_map == 4)
	{
		wlf->init_map = "Maps/level_3.wolf";
		ft_start_wolf(wlf);
	}
	return (0);
}
