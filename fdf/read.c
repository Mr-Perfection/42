/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 23:45:47 by slee              #+#    #+#             */
/*   Updated: 2016/12/04 23:45:50 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	get_height(char *filename)
{
	int		fd;
	char	*line;
	int		height;

	height = 0;
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		height++;
	}
	close(fd);
	return (height);
}

static int	get_width(char *filename)
{
	int		fd;
	char	*line;
	int		width;

	width = 0;
	fd = open(filename, O_RDONLY);
	get_next_line(fd, &line);
	while (*line)
	{
		ft_strtol(line, &line, 10);
		width++;
		while (*line == ' ')
		{
			line++;
		}
	}
	close(fd);
	return (width);
}

void		read_file(char *filename, t_fdf *fdf)
{
	int		fd;
	char	*line;
	int		i;
	int		j;

	fdf->height = get_height(filename);
	fdf->width = get_width(filename);
	fdf->input = (int **)malloc(sizeof(int *) * fdf->height);
	fd = open(filename, O_RDONLY);
	i = 0;
	while (i < fdf->height)
	{
		get_next_line(fd, &line);
		fdf->input[i] = (int *)malloc(sizeof(int) * fdf->width);
		j = 0;
		while (j < fdf->width)
		{
			fdf->input[i][j] = (int)ft_strtol(line, &line, 10);
			j++;
			while (*line && *line == ' ')
				line++;
		}
		i++;
	}
	close(fd);
}
