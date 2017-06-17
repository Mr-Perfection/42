/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 09:58:43 by slee              #+#    #+#             */
/*   Updated: 2017/06/16 06:49:51 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*uc;
	size_t			i;

	i = 0;
	uc = NULL;
	if (s)
	{
		uc = (unsigned char *)s;
		while (i < n)
		{
			uc[i] = (unsigned char)c;
			i++;
		}
	}
	return (void *)uc;
}
