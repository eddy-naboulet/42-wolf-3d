/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 10:19:19 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 16:16:58 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

# define BUFF_SIZE 32

int						get_next_line(int const fd, char **line);

typedef struct			s_struct
{
	char				*b1;
	char				*b2;
	int					fd;
	struct s_struct		*next;
	struct s_struct		*prev;
}						t_struct;

#endif
