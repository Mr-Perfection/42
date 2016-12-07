/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 23:45:36 by slee              #+#    #+#             */
/*   Updated: 2016/12/04 23:45:38 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	move_up(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->pos.y -= 10;
	parse(fdf);
	draw(mlx, fdf);
}

void	move_down(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->pos.y += 10;
	parse(fdf);
	draw(mlx, fdf);
}

void	move_left(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->pos.x -= 10;
	parse(fdf);
	draw(mlx, fdf);
}

void	move_right(t_mlx *mlx, t_fdf *fdf)
{
	mlx_clear_window(mlx->mlx, mlx->window);
	fdf->pos.x += 10;
	parse(fdf);
	draw(mlx, fdf);
}
