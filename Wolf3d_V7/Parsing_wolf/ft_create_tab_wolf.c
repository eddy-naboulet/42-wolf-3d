/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab_wolf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 14:32:59 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/30 16:59:20 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

int		**ft_create_tab_wolf(char *map, int **tab, t_wlf *wlf)
{
	wlf->parse->y = 0;
	wlf->parse->fd = open(map, O_RDONLY);
	while (get_next_line(wlf->parse->fd, &wlf->parse->line) == 1)
	{
		wlf->parse->x = 0;
		wlf->parse->lines = ft_strsplit(wlf->parse->line, ' ');
		while (wlf->parse->x < ft_parse_number(wlf->parse->line))
		{
			tab[wlf->parse->y][wlf->parse->x] =
				ft_atoi(wlf->parse->lines[wlf->parse->x]);
			wlf->parse->x++;
		}
		wlf->parse->y++;
	}
	close(wlf->parse->fd);
	return (0);
}
