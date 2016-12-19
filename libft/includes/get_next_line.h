/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 23:57:25 by slee              #+#    #+#             */
/*   Updated: 2016/12/04 23:57:28 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# define BUFF_SIZE	10000

# define SUCCESS	1
# define FAILURE	-1
# define END		0

typedef struct	s_file
{
	int				fd;
	char			*buffer;
}				t_file;

int				get_next_line(const int fd, char **line);

#endif
