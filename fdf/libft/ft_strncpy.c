/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 14:45:25 by slee              #+#    #+#             */
/*   Updated: 2016/11/01 23:47:29 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char const *src, size_t max)
{
	size_t	i;
	size_t	temp;
	char	*d;

	temp = max;
	d = (char*)dst;
	i = 0;
	while (i < temp && src[i])
	{
		d[i] = src[i];
		i++;
	}
	if (max != 0)
		while (i < max)
		{
			d[i] = '\0';
			i++;
		}
	return (d);
}
