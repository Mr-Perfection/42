/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:33:07 by slee              #+#    #+#             */
/*   Updated: 2016/11/14 16:02:58 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define MAX_TETRI 26
# include <string.h>

typedef unsigned long long t_long;
typedef struct		s_etris
{
	t_long			value;
	char			id;
	unsigned char	x;
	unsigned char	y;
	unsigned char	width;
	unsigned char	height;
}					t_etris;

int					ft_read_tetri(int fd, t_etris *tetris);
int					ft_solve(t_etris *tetris, int count, short *map);
#endif
