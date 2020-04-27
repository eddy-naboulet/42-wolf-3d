/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_main_menu_wolf.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 14:39:33 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/30 14:16:16 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

int		ft_select_main_menu(int keycode, t_wlf *wlf)
{
	if (keycode == 125 && wlf->menu == 0)
	{
		wlf->select = 1;
		ft_start_quit_menu_wolf(wlf);
	}
	if (keycode == 126 && wlf->menu == 0)
	{
		wlf->select = 2;
		ft_start_quit_menu_wolf(wlf);
	}
	return (0);
}
