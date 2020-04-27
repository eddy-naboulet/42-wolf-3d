/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_create_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:48:24 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 15:02:26 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

int		**ft_parse_create_tab(char *map, t_wlf *wlf)
{
	wlf->parse->y = 0;
	wlf->parse->fd = open(map, O_RDONLY);
	while (get_next_line(wlf->parse->fd, &wlf->parse->line) == 1)
	{
		wlf->parse->x = 0;
		wlf->parse->lines = ft_strsplit(wlf->parse->line, ' ');
		while (wlf->parse->lines[wlf->parse->x]/* < ft_parse_number(wlf)*/)
		{
			wlf->parse->tab[wlf->parse->y][wlf->parse->x] =
				ft_atoi(wlf->parse->lines[wlf->parse->x]);
			free(wlf->parse->lines[wlf->parse->x]);
			wlf->parse->x++;
		}
		wlf->parse->y++;
		free(wlf->parse->line);
		free(wlf->parse->lines);
	}
	close(wlf->parse->fd);
	return (0);
}
