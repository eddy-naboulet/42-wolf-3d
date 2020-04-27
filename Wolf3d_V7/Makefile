# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/17 10:35:22 by enaboule          #+#    #+#              #
#    Updated: 2016/05/31 09:20:53 by enaboule         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = wolf3d

SRC = 			Src/main.c\
				Color_wolf/ft_color_map_1.c\
				Draw_wolf/ft_draw_wolf.c\
				Draw_wolf/ft_init_direction.c\
				Draw_wolf/ft_init_draw_wolf.c\
				Menu_wolf/ft_enter_map_wolf.c\
				Menu_wolf/ft_init_menu_wolf.c\
				Menu_wolf/ft_main_menu_wolf.c\
				Menu_wolf/ft_map_menu_wolf.c\
				Menu_wolf/ft_select_main_menu_wolf.c\
				Menu_wolf/ft_select_map_menu_wolf.c\
				Menu_wolf/ft_utils_manu_wolf.c\
				Move_wolf/ft_move_wolf.c\
				Move_wolf/ft_move_wolf_mouse.c\
				Move_wolf/ft_init_move_wolf.c\
				Init_wolf/ft_init_value_wolf.c\
				Init_wolf/ft_init_wolf_base.c\
				Parsing_wolf/ft_parsing_wolf.c\
				Parsing_wolf/ft_create_tab_wolf.c\

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror -g

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
