/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:29:42 by slee              #+#    #+#             */
/*   Updated: 2016/11/07 15:01:38 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *haystack, int needle, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		if (needle == ((char*)haystack)[i])
			return ((void*)haystack + i);
		i++;
	}
	return (NULL);
}
