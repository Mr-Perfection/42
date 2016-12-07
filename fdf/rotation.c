/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 23:46:02 by slee              #+#    #+#             */
/*   Updated: 2016/12/04 23:46:05 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	rotate_up(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->view.x += 1;
	fdf->view.y -= 1;
	parse(fdf);
	draw(mlx, fdf);
}

void	rotate_down(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->view.x -= 1;
	fdf->view.y += 1;
	parse(fdf);
	draw(mlx, fdf);
}

void	rotate_left(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->view.x += 1;
	fdf->view.y += 1;
	parse(fdf);
	draw(mlx, fdf);
}

void	rotate_right(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->view.x -= 1;
	fdf->view.y -= 1;
	parse(fdf);
	draw(mlx, fdf);
}
