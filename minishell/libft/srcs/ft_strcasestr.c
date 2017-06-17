/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 10:05:53 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 10:06:48 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcasestr(const char *haystack, const char *needle)
{
	size_t i;
	size_t n;
	size_t j;

	i = 0;
	n = 0;
	j = 0;
	while ((haystack[i] != '\0') && (needle[n] != '\0'))
	{
		if (ft_tolower(haystack[i]) == ft_tolower(needle[n]))
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
