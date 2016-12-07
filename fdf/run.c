/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 23:46:19 by slee              #+#    #+#             */
/*   Updated: 2016/12/04 23:46:22 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

#define ESC			53
#define UP			126
#define DOWN		125
#define RIGHT		124
#define LEFT		123
#define PAGE_UP		116
#define PAGE_DOWN	121
#define W			13
#define S			1
#define A			0
#define D			2

int		key_hooks(int keycode, t_data *data)
{
	if (keycode == ESC)
		exit(0);
	else if (keycode == UP)
		move_up(data->mlx, data->fdf);
	else if (keycode == DOWN)
		move_down(data->mlx, data->fdf);
	else if (keycode == LEFT)
		move_left(data->mlx, data->fdf);
	else if (keycode == RIGHT)
		move_right(data->mlx, data->fdf);
	else if (keycode == PAGE_UP)
		depth_up(data->mlx, data->fdf);
	else if (keycode == PAGE_DOWN)
		depth_down(data->mlx, data->fdf);
	else if (keycode == W)
		rotate_up(data->mlx, data->fdf);
	else if (keycode == S)
		rotate_down(data->mlx, data->fdf);
	else if (keycode == A)
		rotate_left(data->mlx, data->fdf);
	else if (keycode == D)
		rotate_right(data->mlx, data->fdf);
	return (0);
}

void	run_fdf(t_mlx *mlx, t_fdf *fdf)
{
	t_data		data;

	data.mlx = mlx;
	data.fdf = fdf;
	mlx_key_hook(mlx->window, key_hooks, &data);
	mlx_loop(mlx->mlx);
}
