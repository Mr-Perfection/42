/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 23:44:48 by slee              #+#    #+#             */
/*   Updated: 2016/12/04 23:44:51 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

#define WINDOW_SIZE_X	1920
#define WINDOW_SIZE_Y	1080

t_fdf	*init_fdf(void)
{
	t_fdf	*fdf;

	fdf = (t_fdf *)malloc(sizeof(t_fdf));
	fdf->height = 0;
	fdf->width = 0;
	fdf->depth = 4;
	fdf->pos.x = 0;
	fdf->pos.y = 0;
	fdf->view.x = 20;
	fdf->view.y = 10;
	fdf->input = NULL;
	fdf->grid = NULL;
	return (fdf);
}

t_mlx	*init_mlx(void)
{
	t_mlx	*mlx;

	mlx = (t_mlx *)malloc(sizeof(t_mlx));
	mlx->height = WINDOW_SIZE_Y;
	mlx->width = WINDOW_SIZE_X;
	mlx->mlx = mlx_init();
	mlx->window = mlx_new_window(mlx->mlx, WINDOW_SIZE_X, WINDOW_SIZE_Y, "FDF");
	return (mlx);
}
