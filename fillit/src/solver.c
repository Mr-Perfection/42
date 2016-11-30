/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:02:04 by ddowty            #+#    #+#             */
/*   Updated: 2016/11/14 15:59:01 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
** Backtracking implementation. Manipulates bits of map using the value
** stored in in value to determine if they're free spots and stores that
** location in the piece's struct.
*/

int		ft_solve_map(t_etris *tetris, int size, short *map)
{
	if (tetris->id == 0)
		return (1);
	tetris->y = 0;
	while (tetris->y <= size - tetris->height)
	{
		tetris->x = 0;
		while (tetris->x <= size - tetris->width)
		{
			if (!(*(t_long *)(map + tetris->y) & (tetris->value >> tetris->x)))
			{
				*(t_long *)(map + tetris->y) ^= tetris->value >> tetris->x;
				if (ft_solve_map(tetris + 1, size, map))
					return (1);
				*(t_long *)(map + tetris->y) ^= tetris->value >> tetris->x;
			}
			tetris->x++;
		}
		tetris->y++;
	}
	return (0);
}

/*
** Starting with the smallest size the peices might fit into,
** attemptes to solve increasing the size every failuar.
*/

int		ft_solve(t_etris *tetris, int count, short *map)
{
	int		size;

	size = 2;
	while (size * size < count * 4)
		size++;
	while (!ft_solve_map(tetris, size, map) && size <= 16)
	{
		ft_bzero(map, sizeof(short) * 16);
		size++;
	}
	return (size == 17 ? 0 : size);
}
