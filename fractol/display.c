/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 12:26:45 by slee              #+#    #+#             */
/*   Updated: 2016/12/19 12:26:49 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	pixel_put(t_env *e)
{
	int		pos;

	pos = (e->x * e->img.bpp / 8) + (e->y * e->img.sl);
	e->img.img[pos] = (int)(e->color.z * 256) % 256;
	e->img.img[pos + 1] = ((int)(e->color.y * 256) % 256);
	e->img.img[pos + 2] = ((int)(e->color.x * 256) % 256);
}
