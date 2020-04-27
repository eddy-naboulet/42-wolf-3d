/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 09:43:23 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 13:45:34 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_H
# define WOLF_H

# include "mlx.h"
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <fcntl.h>

typedef struct			s_clr
{
	int					r_w;
	int					g_w;
	int					b_w;
}						t_clr;

typedef struct			s_parse
{
	int					cpt;
	char				**lines;
	char				*line;
	int					**tab;
	int					fd;
	int					y;
	int					x;
}						t_parse;

typedef struct			s_use
{
	void				*mlx;
	void				*win;
	void				*img;
	char				*data;
	int					bpp;
	int					sizeline;
	int					endian;
}						t_use;

typedef struct			s_wlf
{
	int					width;
	int					height;
	double				start_pos_x;
	double				start_pos_y;
	double				vd_x;
	double				vd_y;
	double				plane_x;
	double				plane_y;
	int					x;
	int					x_draw;
	int					y_draw;
	double				camera_x;
	double				ray_pos_x;
	double				ray_pos_y;
	double				ray_dir_x;
	double				ray_dir_y;
	int					map_x;
	int					map_y;
	double				dist_mur_x;
	double				dist_mur_y;
	double				dist_mur_x_2;
	double				dist_mur_y_2;
	double				longeur_mur;
	int					etape_x;
	int					etape_y;
	int					touche;
	int					mur_verti_hori;
	int					hauteur_mur;
	int					draw_start;
	int					draw_end;
	int					re_draw;
	double				movespeed;
	double				movespeed_straf;
	int					select;
	int					select_exit;
	int					select_map;
	int					menu;
	int					ok;
	int					h;
	int					l;
	int					mode;
	char				*init_map;
	void				*xpm;
	t_use				*use;
	t_parse				*parse;
	t_clr				*clr;
}						t_wlf;

void					ft_draw_select(t_wlf *wlf);
void					ft_draw_sky(t_wlf *wlf);
void					ft_draw_wall(t_wlf *wlf);
void					ft_draw_ground(t_wlf *wlf);
void					ft_draw_direction(t_wlf *wlf);
int						ft_draw_all(t_wlf *wlf);
int						ft_draw_init(t_wlf *wlf);
int						ft_draw_restart(t_wlf *wlf);
void					ft_raycast_init_value_base(t_wlf *wlf);
void					ft_raycast_init_value(t_wlf *wlf);
void					ft_raycast_all(t_wlf *wlf, int **tab);
void					ft_raycast_etape(t_wlf *wlf);
void					ft_raycast_wall(t_wlf *wlf, int **tab);
void					ft_raycast_cam(t_wlf *wlf);
int						ft_move_select_key(int keycode, t_wlf *wlf);
void					ft_move_front(t_wlf *wlf);
void					ft_move_back(t_wlf *wlf);
void					ft_move_left(t_wlf *wlf);
void					ft_move_right(t_wlf *wlf);
int						ft_move_mouse(int x, int y, t_wlf *wlf);
int						ft_menu_enter_level(t_wlf *wlf);
void					ft_menu_main_1(t_wlf *wlf);
void					ft_menu_main_2(t_wlf *wlf);
void					ft_menu_map_1(t_wlf *wlf);
void					ft_menu_map_2(t_wlf *wlf);
int						ft_menu_init(int keycode, t_wlf *wlf);
int						ft_menu_select_main(int keycode, t_wlf *wlf);
int						ft_menu_select_map(int keycode, t_wlf *wlf);
int						ft_menu_map_123(int keycode, t_wlf *wlf);
int						ft_menu_map_124(int keycode, t_wlf *wlf);
int						ft_menu_map_125(int keycode, t_wlf *wlf);
int						ft_menu_map_126(int keycode, t_wlf *wlf);
int						ft_menu_enter_main(int keycode, t_wlf *wlf);
int						ft_menu_enter_map(int keycode, t_wlf *wlf);
int						ft_parse_number(char *line);
int						**ft_parse(char *map, t_wlf *wlf);
int						**ft_parse_create_tab(char *map, int **tab, t_wlf *wlf);
void					ft_start_wolf(t_wlf *wlf);
void					ft_restart(t_wlf *wlf);
void 					ft_color_map_1(t_wlf *wlf);

#endif
