/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_redraw.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 14:59:02 by slee              #+#    #+#             */
/*   Updated: 2017/06/10 14:59:02 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

static void	detect_collision(t_mlxdata *d, t_vec move, int neg)
{
	t_vec	new;
	double	speed;

	if (d->sprint)
		speed = SSPD;
	else if (d->walk)
		speed = WSPD;
	else
		speed = MSPD;
	new.x = d->pos.x + (neg ? -move.x : move.x) * speed;
	new.y = d->pos.y + (neg ? -move.y : move.y) * speed;
	if (new.x < CBUF)
		new.x = CBUF;
	if (new.y < CBUF)
		new.y = CBUF;
	if (new.x > d->mapsize.x - CBUF)
		new.x = d->mapsize.x - CBUF;
	if (new.y > d->mapsize.y - CBUF)
		new.y = d->mapsize.y - CBUF;
	if (!d->wmap[(int)(d->pos.y)][(int)(new.x - CBUF2)] &&
		!d->wmap[(int)(d->pos.y)][(int)(new.x + CBUF2)])
		d->pos.x = new.x;
	if (!d->wmap[(int)(new.y - CBUF2)][(int)(d->pos.x)] &&
		!d->wmap[(int)(new.y + CBUF2)][(int)(d->pos.x)])
		d->pos.y = new.y;
}

/*
**	If the info variable inside of the MLX environment is set, then
**	mlxputinfo displays additional information inside of MLX image window using
**	mlx_string_put (player location in the world map grid).
*/

static void	mlxputinfo(t_mlxdata *d)
{
	char		*str;

	ft_asprintf(&str, "Pos. X = %.2f Pos. Y = %.2f", d->pos.x, d->pos.y);
	mlx_string_put(d->mlx, d->win, 0, 0, 0x00FFFFFF, str);
	free(str);
	ft_asprintf(&str, "Dir. X = %.2f Dir. Y = %.2f", d->dir.x, d->dir.y);
	mlx_string_put(d->mlx, d->win, 0, 20, 0x00FFFFFF, str);
	free(str);
}

void		ft_mlxredraw(t_mlxdata *d)
{
	mlx_clear_window(d->mlx, d->win);
	mlx_destroy_image(d->mlx, d->img);
	d->img = mlx_new_image(d->mlx, WINX, WINY);
	d->imgd = (unsigned int*)mlx_get_data_addr(d->img, &(d->bbp),
		&(d->line), &(d->endian));
	threadmanage(d);
	if (d->info)
		mlxputinfo(d);
}

int			ft_redraw(t_mlxdata *d)
{
	if (d->up == 1 && !d->down)
		detect_collision(d, d->dir, 0);
	if (d->down == 1 && !d->up)
		detect_collision(d, d->dir, 1);
	if (d->right == 1 && !d->left && d->shift)
		detect_collision(d, d->plane, 0);
	if (d->left == 1 && !d->right && d->shift)
		detect_collision(d, d->plane, 1);
	if (d->right == 1 && !d->left && !d->shift)
		d->angle -= RSPD;
	if (d->left == 1 && !d->right && !d->shift)
		d->angle += RSPD;
	if (d->angle >= 360)
		d->angle -= 360;
	if (d->angle < 0)
		d->angle += 360;
	d->dir.x = d->odir.x * cos(RA) - d->odir.y * sin(RA);
	d->dir.y = d->odir.x * sin(RA) + d->odir.y * cos(RA);
	d->plane.x = d->oplane.x * cos(RA) - d->oplane.y * sin(RA);
	d->plane.y = d->oplane.x * sin(RA) + d->oplane.y * cos(RA);
	if ((d->left ^ d->right) || (d->up ^ d->down))
		ft_mlxredraw(d);
	return (1);
}
