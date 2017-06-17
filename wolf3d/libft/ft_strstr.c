/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 12:04:43 by slee              #+#    #+#             */
/*   Updated: 2016/11/07 15:01:38 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	size_t		inner;

	if (needle[0] == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		inner = 0;
		while (haystack[inner] == needle[inner])
		{
			if (needle[inner + 1] == '\0')
				return ((char*)haystack);
			inner++;
		}
		haystack++;
	}
	return (NULL);
}
