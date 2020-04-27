/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_menu_wolf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 14:37:55 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/30 14:12:30 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

int		ft_init_menu_wolf(int keycode, t_wlf *wlf)
{
	if (wlf->menu == 0)
	{
		ft_select_main_menu(keycode, wlf);
		ft_enter_exit_main_menu(keycode, wlf);
	}
	if (wlf->menu == 1)
	{
		ft_select_key_map(keycode, wlf);
		ft_enter_exit_map_menu(keycode, wlf);
	}
	if (keycode == 53)
		exit(1);
	return (0);
}
