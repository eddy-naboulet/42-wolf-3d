/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menu_enter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:25:17 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 11:55:33 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

int		ft_menu_enter_main(int keycode, t_wlf *wlf)
{
	if (keycode == 36 && wlf->menu == 0)
	{
		wlf->select_exit = 1;
		if (wlf->select_exit == 1 && wlf->select == 1)
			exit(1);
		if ((wlf->select_exit == 1 && wlf->select == 2) || wlf->select == 0)
		{
			ft_menu_map_1(wlf);
			wlf->menu = 1;
		}
	}
	ft_menu_select_map(keycode, wlf);
	return (0);
}

int		ft_menu_enter_map(int keycode, t_wlf *wlf)
{
	if (keycode == 36 && wlf->menu == 1)
		ft_menu_enter_level(wlf);
	if (keycode == 51 && wlf->menu == 1)
	{
		wlf->menu = 0;
		wlf->mode = 0;
		wlf->select_map = 0;
		ft_menu_main_1(wlf);
	}
	if (keycode == 53)
		exit(1);
	return (0);
}
