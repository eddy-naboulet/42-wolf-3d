/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_map_menu_wolf.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 12:59:31 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/30 14:16:46 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

int		ft_select_key_map(int keycode, t_wlf *wlf)
{
	ft_map_menu_125(keycode, wlf);
	ft_map_menu_126(keycode, wlf);
	ft_map_menu_124(keycode, wlf);
	ft_map_menu_123(keycode, wlf);
	return (0);
}

int		ft_map_menu_125(int keycode, t_wlf *wlf)
{
	if (keycode == 125 && wlf->menu == 1 && wlf->select_map != 4)
	{
		if (wlf->select_map == 3)
		{
			wlf->select_map = 4;
			ft_map_menu_wolf(wlf);
		}
		else
		{
			wlf->select_map = 1;
			ft_map_menu_wolf(wlf);
		}
	}
	return (0);
}

int		ft_map_menu_126(int keycode, t_wlf *wlf)
{
	if (keycode == 126 && wlf->menu == 1)
	{
		if (wlf->select_map == 1)
		{
			wlf->select_map = 2;
			ft_map_menu_wolf(wlf);
		}
		else if (wlf->select_map == 4)
		{
			wlf->select_map = 3;
			ft_map_menu_wolf(wlf);
		}
	}
	return (0);
}

int		ft_map_menu_124(int keycode, t_wlf *wlf)
{
	if (keycode == 124 && wlf->menu == 1)
	{
		if (wlf->select_map == 1)
		{
			wlf->select_map = 4;
			ft_map_menu_wolf(wlf);
		}
		else if (wlf->select_map == 2 || wlf->select_map == 0)
		{
			wlf->select_map = 3;
			ft_map_menu_wolf(wlf);
		}
	}
	return (0);
}

int		ft_map_menu_123(int keycode, t_wlf *wlf)
{
	if (keycode == 123 && wlf->menu == 1)
	{
		if (wlf->select_map == 3)
		{
			wlf->select_map = 2;
			ft_map_menu_wolf(wlf);
		}
		else if (wlf->select_map == 4)
		{
			wlf->select_map = 1;
			ft_map_menu_wolf(wlf);
		}
	}
	return (0);
}
