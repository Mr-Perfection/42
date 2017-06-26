/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 09:46:36 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 09:47:44 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (dest && src)
	{
		i = 0;
		str1 = (unsigned char *)dest;
		str2 = (unsigned char *)src;
		while (i < n)
		{
			str1[i] = str2[i];
			if (str2[i] == (unsigned char)c)
				return ((void *)(str1 + i + 1));
			i++;
		}
	}
	return (NULL);
}
