/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getaline.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 19:12:02 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 19:12:02 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

static int	ft_read_line(int fd, char **line)
{
	char	*buf;
	int		i;

	buf = ft_strnew(1);
	i = 0;
	while (read(fd, buf, 1) > 0)
	{
		i++;
		*line = ft_strjoinreplace(*line, buf);
		if (buf[0] == '\n')
			break ;
		ft_bzero(buf, 2);
	}
	ft_memdel((void**)&buf);
	return (i);
}

int			getaline(const int fd, char **ln)
{
	int			i;

	if (!ln || fd < 0)
		return (-1);
	*ln = ft_strnew(0);
	i = ft_read_line(fd, ln);
	if (i == 0)
		ft_memdel((void**)ln);
	return (i);
}
