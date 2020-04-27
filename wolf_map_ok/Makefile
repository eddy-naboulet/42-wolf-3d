# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/01 09:30:53 by enaboule          #+#    #+#              #
#    Updated: 2016/06/02 11:14:56 by enaboule         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = wolf3d

SRC = 			src/main.c\
				src/ft_start.c\
				color_wolf/ft_color.c\
				draw_wolf/ft_draw_all.c\
				draw_wolf/ft_draw_direction.c\
				draw_wolf/ft_draw_init.c\
				init_wolf/ft_raycast_init_value.c\
				init_wolf/ft_raycast.c\
				move_wolf/ft_move_key_select.c\
				move_wolf/ft_move_key.c\
				move_wolf/ft_move_mouse.c\
				menu_wolf/ft_menu_enter_map.c\
				menu_wolf/ft_menu_enter.c\
				menu_wolf/ft_menu_init.c\
				menu_wolf/ft_menu_main.c\
				menu_wolf/ft_menu_map.c\
				menu_wolf/ft_menu_select_main.c\
				menu_wolf/ft_menu_select_map.c\
				parse_wolf/ft_parse_create_tab.c\
				parse_wolf/ft_parse.c\
				color_wolf/ft_color_255.c\
				color_wolf/ft_color_510.c\
				color_wolf/ft_color_765.c\
				color_wolf/ft_color_999.c\

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

FW = -lmlx -framework OpenGL -framework AppKit -framework OpenCL

LIB =  -L/usr/local/lib/ libft/libft.a

$(NAME): $(OBJ)
	@make -C libft/
	@gcc $(FLAGS) $(LIB) -I/usr/local/include $(FW) $(OBJ) -o $(NAME)

all: $(NAME)

%.o:%.c
	gcc -c $< -o $@ $(FLAGS)

clean:
	rm -f $(OBJ)
	make -C libft/ fclean

fclean: clean
	rm -f $(NAME)

re: fclean all
