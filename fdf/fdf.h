/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 23:43:51 by slee              #+#    #+#             */
/*   Updated: 2016/12/04 23:43:54 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <libc.h>
# include <math.h>
# include "includes/libft.h"
# include "mlx.h"

typedef struct	s_point
{
	int		x;
	int		y;
}				t_point;

typedef struct	s_delta
{
	int		x;
	int		y;
	int		abs_x;
	int		abs_y;
}				t_delta;

typedef struct	s_fdf
{
	int		height;
	int		width;
	int		depth;
	t_point	view;
	t_point	pos;
	int		**input;
	t_point	**grid;
}				t_fdf;

typedef struct	s_mlx
{
	int		height;
	int		width;
	void	*mlx;
	void	*window;
}				t_mlx;

typedef struct	s_data
{
	t_fdf	*fdf;
	t_mlx	*mlx;
}				t_data;

void			validate_num_args(int argc);
t_fdf			*init_fdf(void);
t_mlx			*init_mlx(void);
void			read_file(char *filename, t_fdf *fdf);
void			parse(t_fdf *fdf);
void			draw(t_mlx *mlx, t_fdf *fdf);
void			draw_line(t_mlx *mlx, t_point start, t_point end);
void			run_fdf(t_mlx *mlx, t_fdf *fdf);
void			move_up(t_mlx *mlx, t_fdf *fdf);
void			move_down(t_mlx *mlx, t_fdf *fdf);
void			move_left(t_mlx *mlx, t_fdf *fdf);
void			move_right(t_mlx *mlx, t_fdf *fdf);
void			depth_up(t_mlx *mlx, t_fdf *fdf);
void			depth_down(t_mlx *mlx, t_fdf *fdf);
void			rotate_up(t_mlx *mlx, t_fdf *fdf);
void			rotate_down(t_mlx *mlx, t_fdf *fdf);
void			rotate_left(t_mlx *mlx, t_fdf *fdf);
void			rotate_right(t_mlx *mlx, t_fdf *fdf);

#endif
