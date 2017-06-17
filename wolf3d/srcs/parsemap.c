/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsemap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 15:54:13 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 15:54:13 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

static size_t	ft_get_arr_len(char **s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			i++;
	}
	return (i);
}

/*
**	ft_get_metadata uses get_next_line to get a metadata line from the map
**	file. These lines represent both the size of the map and the starting
**	position of the player within the map. int x and int y are passed in for
**	error-checking and represent the lower limits for the specific values.
**	A map should be at least 3x3 and the starting position has to be at
**	(1, 1) as x and y positions or above.
*/

static t_vec	ft_get_metadata(int fd, int x, int y)
{
	char	*line;
	char	**tmp;
	t_vec	vec;
	size_t	len;

	if (!(getaline(fd, &line)))
		ft_puterror(2);
	tmp = ft_strsplit(line, ' ');
	ft_memdel((void**)&line);
	len = ft_get_arr_len(tmp);
	if (len != 2)
		ft_linecleanup(tmp);
	vec.x = ft_atoi(tmp[0]);
	vec.y = ft_atoi(tmp[1]);
	if (vec.x < x || vec.y < y)
		ft_linecleanup(tmp);
	ft_freetmp(tmp);
	return (vec);
}

/*
**	check_map checks validity of the map file. It ensures that the starting
**	position of the user has to be within the boundaries of the wall.
**	It also verifies that the outside edges of the map are walls and that
**	the only values for spaces map are walls and that the only values
**	for spaces in the map are 0-9 which means 0-9 different textures.
*/

static int		check_map(t_mlxdata *d)
{
	int		i;
	int		j;

	if (d->pos.x >= d->mapsize.x - 1 || d->pos.y >= d->mapsize.y - 1)
		return (1);
	if (d->wmap[(int)d->pos.y][(int)d->pos.x] != 0)
		return (1);
	j = 0;
	while (j < d->mapsize.y)
	{
		i = 0;
		while (i < d->mapsize.x)
		{
			if ((i == 0 || i == d->mapsize.x - 1) && d->wmap[j][i] == 0)
				return (1);
			if ((j == 0 || j == d->mapsize.y - 1) && d->wmap[j][i] == 0)
				return (1);
			if (d->wmap[j][i] < 0 || d->wmap[j][i] > 9)
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

/*
**	loadmap transfers the rest of the map file into memory and verifies that
**	each line matches the width specified by the metadata size and the number
**	of lines matches the height specified by the metadata size.
*/

static void		loadmap(t_mlxdata *d, int fd, int i)
{
	int		j;
	char	*line;
	char	**tmp;

	while (getaline(fd, &line) && i < d->mapsize.y)
	{
		tmp = ft_strsplit(line, ' ');
		ft_memdel((void**)&line);
		j = ft_get_arr_len(tmp);
		if (j != d->mapsize.x)
			ft_cleanall(d, tmp);
		j = -1;
		while (tmp[++j])
			d->wmap[i][j] = ft_atoi(tmp[j]);
		ft_freetmp(tmp);
		i++;
	}
	if ((j = getaline(fd, &line)) || i != (int)d->mapsize.y || check_map(d))
	{
		if (j)
			ft_memdel((void**)&line);
		ft_freemlxdata(d);
		ft_puterror(2);
	}
}

/*
**	ft_getmap opens the file, gets the metadata, initializes the MLX
**	environment and then loads the rest of the map if it passes validation.
*/

t_mlxdata		*ft_getmap(char *file)
{
	int			fd;
	t_mlxdata	*d;
	t_vec		size;
	t_vec		start;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_puterror(2);
	size = ft_get_metadata(fd, 3, 3);
	if (size.x > MAPXMAX || size.y > MAPYMAX)
		ft_puterror(2);
	start = ft_get_metadata(fd, 1, 1);
	d = mlxsetup(size, start);
	loadmap(d, fd, 0);
	return (d);
}
