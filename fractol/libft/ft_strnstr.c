/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 14:46:30 by slee              #+#    #+#             */
/*   Updated: 2016/11/01 23:47:36 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t max)
{
	char	*haycp;
	char	*needlecp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	haycp = (char *)haystack;
	needlecp = (char *)needle;
	if (!*needle)
		return ((char*)haystack);
	while (haycp[i] && i < max)
	{
		j = 0;
		while (haycp[i + j] == needlecp[j] && (i + j) < max)
		{
			j++;
			if (j == ft_strlen(needlecp))
				return ((char *)(haystack + (i)));
		}
		i++;
	}
	return (NULL);
}
