/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:46:03 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 16:19:56 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

size_t			ft_tablen(void **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int			**ft_parse(char *map, t_wlf *wlf)
{
	wlf->parse->y = 0;
	wlf->parse->fd = open(map, O_RDONLY);
	while (get_next_line(wlf->parse->fd, &wlf->parse->line) == 1)
	{
		wlf->parse->y++;
		free(wlf->parse->line);
	}
	free(wlf->parse->line);
	wlf->parse->tab = ft_memalloc(sizeof(int*) * (wlf->parse->y + 1));
	close(wlf->parse->fd);
	wlf->parse->fd = open(map, O_RDONLY);
	wlf->parse->y = 0;
	while (get_next_line(wlf->parse->fd, &wlf->parse->line) == 1)
	{
		wlf->parse->lines = ft_strsplit(wlf->parse->line, ' ');
		free(wlf->parse->line);
		wlf->parse->x = -1;
		wlf->parse->tab[wlf->parse->y] = ft_memalloc(sizeof(int) *
					ft_tablen((void**)wlf->parse->lines));
		while (wlf->parse->lines[++wlf->parse->x])
		{
			wlf->parse->tab[wlf->parse->y][wlf->parse->x] =
									ft_atoi(wlf->parse->lines[wlf->parse->x]);
			free(wlf->parse->lines[wlf->parse->x]);
		}
		free(wlf->parse->lines);
		wlf->parse->y++;
	}
	free(wlf->parse->line);
	close(wlf->parse->fd);
	return (wlf->parse->tab);
}
