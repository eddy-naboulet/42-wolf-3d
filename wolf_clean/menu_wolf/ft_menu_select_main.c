/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menu_select_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:23:55 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 10:37:53 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

int		ft_menu_select_main(int keycode, t_wlf *wlf)
{
	if (keycode == 125 && wlf->menu == 0)
	{
		wlf->select = 1;
		ft_menu_main_2(wlf);
	}
	if (keycode == 126 && wlf->menu == 0)
	{
		wlf->select = 2;
		ft_menu_main_2(wlf);
	}
	return (0);
}
