/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 20:10:50 by slee              #+#    #+#             */
/*   Updated: 2016/11/08 12:10:10 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t max)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < max)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < max)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
