/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:05:23 by slee              #+#    #+#             */
/*   Updated: 2016/11/14 16:00:24 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"
#include "fillit.h"

/*
** Creates an empty string to be filled and printed
*/

char	*ft_empty_map(int size)
{
	char	*str;
	int		x;
	int		y;

	str = ft_strnew((size + 1) * (size));
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			str[y * (size + 1) + x] = '.';
			x++;
		}
		str[y * (size + 1) + x] = '\n';
		y++;
	}
	return (str);
}

/*
** Prints the pieces in a map using the locations givin by the solver.
*/

void	ft_print(t_etris *t, int count, int size)
{
	char	*str;
	int		x;
	int		y;

	str = ft_empty_map(size);
	while (count > 0)
	{
		y = 0;
		while (y < t->height)
		{
			x = 0;
			while (x < t->width)
			{
				if ((t->value >> (16 * (y + 1) - 1 - x)) & 1)
					str[(t->y + y) * (size + 1) + x + t->x] = t->id;
				x++;
			}
			y++;
		}
		t++;
		count--;
	}
	ft_putstr(str);
	ft_strdel(&str);
}

/*
** Print error message.
*/

int		error_line(char *str)
{
	ft_putendl(str);
	return (1);
}

int		main(int argc, char **argv)
{
	t_etris		tetris[MAX_TETRI + 1];
	short		map[16];
	int			count;
	int			size;

	if (argc != 2 || argv == 0)
		return (error_line("usage: fillit input_file"));
	ft_bzero(tetris, sizeof(t_etris) * (MAX_TETRI + 1));
	if ((count = ft_read_tetri(open(argv[1], O_RDONLY), tetris)) == 0)
		return (error_line("error"));
	ft_bzero(map, sizeof(short) * 16);
	if ((size = ft_solve(tetris, count, map)) == 0)
		return (error_line("error"));
	ft_print(tetris, count, size);
	return (0);
}
