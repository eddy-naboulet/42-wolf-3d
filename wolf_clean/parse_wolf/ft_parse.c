/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:46:03 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 13:45:36 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/wolf.h"

int			ft_parse_number(char *line)
{
	int		cpt;
	char	**lines;

	cpt = 0;
	lines = ft_strsplit(line, ' ');
	while (lines[cpt])
		cpt++;
	free(lines);
	return (cpt);
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
	wlf->parse->tab = ft_memalloc(sizeof(int*) * wlf->parse->y);
	close(wlf->parse->fd);
	wlf->parse->fd = open(map, O_RDONLY);
	wlf->parse->y = 0;
	while (get_next_line(wlf->parse->fd, &wlf->parse->line) == 1)
	{
		wlf->parse->tab[wlf->parse->y] = malloc(sizeof(int) *
			ft_parse_number(wlf->parse->line));
		wlf->parse->y++;
		free(wlf->parse->line);
	}
	close(wlf->parse->fd);
	return (wlf->parse->tab);
}
