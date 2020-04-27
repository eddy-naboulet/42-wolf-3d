/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_manu_wolf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 14:47:35 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/30 14:17:17 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

int		ft_enter_exit_main_menu(int keycode, t_wlf *wlf)
{
	if (keycode == 36 && wlf->menu == 0)
	{
		wlf->select_exit = 1;
		if (wlf->select_exit == 1 && wlf->select == 1)
			exit(1);
		if ((wlf->select_exit == 1 && wlf->select == 2) || wlf->select == 0)
		{
			ft_map_menu_wolf(wlf);
			wlf->menu = 1;
		}
	}
	ft_select_key_map(keycode, wlf);
	return (0);
}

int		ft_enter_exit_map_menu(int keycode, t_wlf *wlf)
{
	if (keycode == 36 && wlf->menu == 1)
		ft_enter_map(wlf);
	if (keycode == 51 && wlf->menu == 1)
	{
		wlf->menu = 0;
		wlf->mode = 0;
		wlf->select_map = 0;
		ft_main_menu_wolf(wlf);
	}
	if (keycode == 53)
		exit(1);
	return (0);
}
