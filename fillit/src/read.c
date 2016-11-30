/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 21:01:19 by slee              #+#    #+#             */
/*   Updated: 2016/11/14 15:57:54 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "libft.h"
#include "fillit.h"

/*
** Utility function to get min-max values for ft_get_piece.
** pos is a 4 dimensional array encoded as:
** x Min m[0], x Max m[1], y Min m[2], y  Max m[3]
*/

void	ft_min_max(char *str, char *a)
{
	unsigned char i;

	i = 0;
	a[0] = 3;
	a[1] = 0;
	a[2] = 3;
	a[3] = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if (i % 5 < a[0])
				a[0] = i % 5;
			if (i % 5 > a[1])
				a[1] = i % 5;
			if (i / 5 < a[2])
				a[2] = i / 5;
			if (i / 5 > a[3])
				a[3] = i / 5;
		}
		i++;
	}
}

/*
** Reads a piece from a valid chunk and puts that in the t_etris structure.
*/

t_etris	ft_get_piece(char *str, char id)
{
	t_etris	tetris;
	char	m[4];
	int		x;
	int		y;

	ft_min_max(str, &(m[0]));
	tetris.width = m[1] - m[0] + 1;
	tetris.height = m[3] - m[2] + 1;
	tetris.id = id;
	tetris.value = 0;
	y = 0;
	while (y < tetris.height)
	{
		x = 0;
		while (x < tetris.width)
		{
			if (str[(m[0] + x) + (m[2] + y) * 5] == '#')
				tetris.value |= (1L << (16 * (y + 1) - 1 - x));
			x++;
		}
		y++;
	}
	return (tetris);
}

/*
** Checks connection counts, if we have 6 or 8 connections, the tetrimino is
** valid. Otherwise, our tetrimino is not contiguous.
** (This of course assumes we know this tetrimino has only 4 blocks)
*/

int		check_connection(char *str)
{
	int block;
	int i;

	block = 0;
	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if ((i + 1) < 20 && str[i + 1] == '#')
				block++;
			if ((i - 1) >= 0 && str[i - 1] == '#')
				block++;
			if ((i + 5) < 20 && str[i + 5] == '#')
				block++;
			if ((i - 5) >= 0 && str[i - 5] == '#')
				block++;
		}
		i++;
	}
	return (block == 6 || block == 8);
}

/*
** Checks character counts and that chunk format is valid.
*/

int		ft_check_counts(char *str, int count)
{
	int i;
	int blocs;

	blocs = 0;
	i = 0;
	while (i < 20)
	{
		if (i % 5 < 4)
		{
			if (!(str[i] == '#' || str[i] == '.'))
				return (1);
			if (str[i] == '#' && ++blocs > 4)
				return (2);
		}
		else if (str[i] != '\n')
			return (3);
		i++;
	}
	if (count == 21 && str[20] != '\n')
		return (4);
	if (!check_connection(str))
		return (5);
	return (0);
}

/*
** Read tetriminos from fd and put them in our tetrimino array.
** We use 21 sized reads to read piece by piece since there are
** 4 lines made of 4 chars (+ newline) = 20 chars + sep. newline = 21 chars
** (don't forget that \0)
*/

int		ft_read_tetri(int fd, t_etris *tetris)
{
	char	buf[22];
	int		count;
	char	cur;

	cur = 'A';
	while ((count = read(fd, buf, 21)) >= 20)
	{
		if (ft_check_counts(buf, count) != 0)
			return (0);
		*(tetris++) = ft_get_piece(buf, cur++);
		if (count == 20)
			buf[20] = '\0';
	}
	if (count != 0 || buf[20] != '\0')
		return (0);
	return (cur - 'A');
}
