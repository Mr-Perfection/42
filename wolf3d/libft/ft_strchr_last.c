/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 15:30:47 by slee              #+#    #+#             */
/*   Updated: 2017/01/21 15:35:27 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strchr_last(const char *haystack, int needle)
{
	char			*end;

	end = ft_strchr(haystack, '\0');
	while (end >= haystack)
	{
		if (*end == needle)
			return ((char*)end);
		end--;
	}
	return (NULL);
}
