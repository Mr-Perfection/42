/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 10:18:13 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 10:19:16 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	if (src_len < size - dst_len)
	{
		ft_memcpy(dst + dst_len, src, src_len);
		dst = dst + dst_len + src_len;
	}
	else
	{
		ft_memcpy(dst + dst_len, src, size - dst_len - 1);
		dst = dst + size - 1;
	}
	*dst = '\0';
	return (src_len + dst_len);
}
