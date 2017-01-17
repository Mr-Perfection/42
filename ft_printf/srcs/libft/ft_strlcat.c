/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:17:54 by slee              #+#    #+#             */
/*   Updated: 2017/01/13 16:21:15 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*dst_ptr;
	char	*src_ptr;
	size_t	dst_len;
	size_t	i;

	dst_ptr = dst;
	src_ptr = (char*)src;
	i = size;
	while (i-- != 0 && *dst_ptr != '\0')
		dst_ptr++;
	dst_len = dst_ptr - dst;
	i = size - dst_len;
	if (i == 0)
		return (dst_len + ft_strlen(src_ptr));
	while (*src_ptr != '\0')
	{
		if (i != 1)
		{
			*(dst_ptr++) = *(src_ptr);
			i--;
		}
		src_ptr++;
	}
	*dst_ptr = '\0';
	return (dst_len + (src_ptr - src));
}
