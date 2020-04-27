/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 09:54:15 by enaboule          #+#    #+#             */
/*   Updated: 2016/06/01 10:59:31 by enaboule         ###   ########.fr       */
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

# define DEBUG printf("%d - %s - %s\n", __LINE__, __func__, __FILE__);

typedef struct			s_clr
{
	int 				r_w;
	int 				g_w;
	int 				b_w;
}						t_clr;

typedef struct			s_parse
{
	int 				cpt;
	char				**lines;
	char				*line;
	int 				**tab;
	int 				fd;
	int 				y;
	int 				x;
}						t_parse;

typedef struct			s_use
{
	void 				*mlx;
	void 				*win;
	void 				*img;
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
	double				time_1;
	double				oldtime;
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
	int				hauteur_mur;
	int					draw_start;
	int					draw_end;
	int					re_draw;
	double 				movespeed;
	double				movespeed_straf;
	int 				select;
	int 				select_exit;
	int 				select_map;
	int 				menu;
	int 				ok;
	int 				h;
	int 				l;
	int 				mode;
	char 				*init_map;
	void 				*xpm;
	t_use				*use;
	t_parse				*parse;
	t_clr				*clr;
}						t_wlf;

int 					ft_init_draw(t_wlf *wlf);
void 					ft_draw_sky(t_wlf *wlf);
void 					ft_draw_wall(t_wlf *wlf);
void 					ft_draw_ground(t_wlf *wlf);
void 					ft_init_value_wolf(t_wlf *wlf);
void 					ft_dir_wolf(t_wlf *wlf);
void 					ft_draw_start_wolf(t_wlf *wlf);
void 					ft_init_value_wolf_base(t_wlf *wlf);
int						**ft_parsing_wolf(char *map, t_wlf *wlf);
int						**ft_create_tab_wolf(char *map, int **tab, t_wlf *wlf);
int 					ft_parse_number(char *line);
void 					ft_draw_world(t_wlf *wlf, int **tab);
void 					ft_init_value_wolf(t_wlf *wlf);
void 					ft_ray_cast_wolf(t_wlf *wlf, int **tab);
void 					ft_ray_cast_wolf_etape(t_wlf *wlf);
void 					ft_ray_cast_wolf_wall(t_wlf *wlf, int **tab);
void 					ft_ray_cast_wolf_cam(t_wlf *wlf);
int 					ft_restart_draw(t_wlf *wlf);
int 					ft_draw_all(t_wlf *wlf);
int 					ft_select_move_wolf(int keycode, t_wlf *wlf);
int 					ft_move_wolf_mouse(int x, int y, t_wlf *wlf);
int 					ft_select_move(int keycode, t_wlf *wlf);
void 					ft_color_map_1(t_wlf *wlf);
void 					ft_init_direction(t_wlf *wlf);
void 					ft_select_draw(t_wlf *wlf);
void 					ft_move_front(t_wlf *wlf);
void 					ft_move_back(t_wlf *wlf);
void 					ft_strafing_left(t_wlf *wlf);
void 					ft_strafing_right(t_wlf *wlf);
void 					ft_put_menu_wolf(t_wlf *wlf);
int 					ft_select_menu(int keycode, t_wlf *wlf);
void 					ft_start_quit_menu_wolf(t_wlf *wlf);
void 					ft_main_menu_wolf(t_wlf *wlf);
int 					ft_select_main_menu(int keycode, t_wlf *wlf);
void 					ft_map_menu_wolf(t_wlf *wlf);
int 					ft_select_map_menu(int keycode, t_wlf *wlf);
int 					ft_enter_map(t_wlf *wlf);
void 					ft_start_wolf(t_wlf *wlf);
int 					ft_map_menu_125(int keycode, t_wlf *wlf);
int 					ft_map_menu_126(int keycode, t_wlf *wlf);
int 					ft_map_menu_124(int keycode, t_wlf *wlf);
int 					ft_map_menu_123(int keycode, t_wlf *wlf);
int 					ft_select_key_map(int keycode, t_wlf *wlf);
int 					ft_enter_exit_main_menu(int keycode, t_wlf *wlf);
int 					ft_enter_exit_map_menu(int keycode, t_wlf *wlf);
int 					ft_init_menu_wolf(int keycode, t_wlf *wlf);
void 					ft_restart(t_wlf *wlf);

#endif
