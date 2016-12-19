/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:29:26 by slee              #+#    #+#             */
/*   Updated: 2016/11/01 23:45:40 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	count;
	char	*d;
	char	*s;

	d = (char*)dst;
	s = (char*)src;
	count = 0;
	while (count < n)
	{
		d[count] = s[count];
		if (d[count] == c)
			return ((void*)&d[count] + 1);
		count++;
	}
	return (NULL);
}
