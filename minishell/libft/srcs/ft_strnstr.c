/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 10:27:08 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 10:27:51 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	j;

	i = 0;
	n = 0;
	j = 0;
	while ((haystack[i] != '\0') && (needle[n] != '\0') && (i < len))
	{
		if (haystack[i] == needle[n])
			n++;
		i++;
	}
	if (n == ft_strlen(needle))
	{
		while (j < (i - n))
		{
			haystack++;
			j++;
		}
		return ((char *)haystack);
	}
	else
		return (NULL);
}
