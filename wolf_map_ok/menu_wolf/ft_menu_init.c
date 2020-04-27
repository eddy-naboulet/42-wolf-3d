/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menu_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:21:49 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 11:51:16 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

int		ft_menu_init(int keycode, t_wlf *wlf)
{
	if (wlf->menu == 0)
	{
		ft_menu_select_main(keycode, wlf);
		ft_menu_enter_main(keycode, wlf);
	}
	if (wlf->menu == 1)
	{
		ft_menu_select_map(keycode, wlf);
		ft_menu_enter_map(keycode, wlf);
	}
	if (keycode == 53)
		exit(1);
	return (0);
}
