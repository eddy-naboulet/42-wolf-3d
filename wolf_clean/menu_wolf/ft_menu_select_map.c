/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menu_select_map.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:24:35 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 10:35:54 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

int		ft_menu_select_map(int keycode, t_wlf *wlf)
{
	ft_menu_map_125(keycode, wlf);
	ft_menu_map_126(keycode, wlf);
	ft_menu_map_124(keycode, wlf);
	ft_menu_map_123(keycode, wlf);
	return (0);
}

int		ft_menu_map_125(int keycode, t_wlf *wlf)
{
	if (keycode == 125 && wlf->menu == 1 && wlf->select_map != 4)
	{
		if (wlf->select_map == 3)
		{
			wlf->select_map = 4;
			ft_menu_map_1(wlf);
		}
		else
		{
			wlf->select_map = 1;
			ft_menu_map_1(wlf);
		}
	}
	return (0);
}

int		ft_menu_map_126(int keycode, t_wlf *wlf)
{
	if (keycode == 126 && wlf->menu == 1)
	{
		if (wlf->select_map == 1)
		{
			wlf->select_map = 2;
			ft_menu_map_1(wlf);
		}
		else if (wlf->select_map == 4)
		{
			wlf->select_map = 3;
			ft_menu_map_1(wlf);
		}
	}
	return (0);
}

int		ft_menu_map_124(int keycode, t_wlf *wlf)
{
	if (keycode == 124 && wlf->menu == 1)
	{
		if (wlf->select_map == 1)
		{
			wlf->select_map = 4;
			ft_menu_map_1(wlf);
		}
		else if (wlf->select_map == 2 || wlf->select_map == 0)
		{
			wlf->select_map = 3;
			ft_menu_map_1(wlf);
		}
	}
	return (0);
}

int		ft_menu_map_123(int keycode, t_wlf *wlf)
{
	if (keycode == 123 && wlf->menu == 1)
	{
		if (wlf->select_map == 3)
		{
			wlf->select_map = 2;
			ft_menu_map_1(wlf);
		}
		else if (wlf->select_map == 4)
		{
			wlf->select_map = 1;
			ft_menu_map_1(wlf);
		}
	}
	return (0);
}
