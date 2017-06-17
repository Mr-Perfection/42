/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 10:34:31 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 10:35:16 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	n;
	size_t	j;

	i = 0;
	n = 0;
	j = 0;
	while ((haystack[i] != '\0') && (needle[n] != '\0'))
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
		return (char *)haystack;
	}
	else
		return (NULL);
}
