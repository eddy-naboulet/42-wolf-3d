/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menu_enter_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:20:57 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 11:59:27 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

int		ft_menu_enter_level(t_wlf *wlf)
{
	if (wlf->select_map == 1)
	{
		wlf->init_map = "maps/level_1.wolf";
		ft_start_wolf(wlf);
	}
	if (wlf->select_map == 2)
	{
		wlf->init_map = "maps/demo_1.wolf";
		wlf->mode = 1;
		ft_start_wolf(wlf);
	}
	if (wlf->select_map == 3)
	{
		wlf->init_map = "maps/level_2.wolf";
		ft_start_wolf(wlf);
	}
	if (wlf->select_map == 4)
	{
		wlf->init_map = "maps/level_3.wolf";
		ft_start_wolf(wlf);
	}
	return (0);
}
