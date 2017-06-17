/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 10:19:24 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 10:19:56 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_nstrlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s && s[i])
	{
		while (s[i] != '\0')
			i++;
	}
	return (i);
}
