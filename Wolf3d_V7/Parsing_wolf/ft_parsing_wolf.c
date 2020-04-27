/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_wolf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 17:19:03 by enaboule          #+#    #+#             */
/*   Updated: 2016/05/30 16:59:28 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Src/wolf.h"

int			ft_parse_number(char *line)
{
	int		cpt;
	char	**lines;

	cpt = 0;
	lines = ft_strsplit(line, ' ');
	while (lines[cpt])
		cpt++;
	return (cpt);
}

int			**ft_parsing_wolf(char *map, t_wlf *wlf)
{
	wlf->parse->y = 0;
	wlf->parse->fd = open(map, O_RDONLY);
	while (get_next_line(wlf->parse->fd, &wlf->parse->line) == 1)
	{
		wlf->parse->y++;

	}
	wlf->parse->tab = ft_memalloc(sizeof(int*) * wlf->parse->y);
	close(wlf->parse->fd);
	wlf->parse->fd = open(map, O_RDONLY);
	wlf->parse->y = 0;
	while (get_next_line(wlf->parse->fd, &wlf->parse->line) == 1)
	{
		wlf->parse->tab[wlf->parse->y] = malloc(sizeof(int) *
			ft_parse_number(wlf->parse->line));
		wlf->parse->y++;
	}
	close(wlf->parse->fd);
	return (wlf->parse->tab);
}
