/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_readlink_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 11:13:52 by slee              #+#    #+#             */
/*   Updated: 2017/01/22 11:21:49 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char				*get_readlink_string(char *link_path)
{
	char			buffer[READLINK_BUFSIZE];
	size_t			lu;

	lu = readlink(link_path, buffer, READLINK_BUFSIZE);
	if (lu >= READLINK_BUFSIZE)
		ft_putendl_exit("Link filename too long\n", 1);
	buffer[lu] = '\0';
	return (ft_strdup(buffer));
}
