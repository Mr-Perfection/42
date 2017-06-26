/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:20:55 by slee              #+#    #+#             */
/*   Updated: 2016/11/07 11:29:06 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *haystack, int needle)
{
	while (*haystack && *haystack != needle)
		haystack++;
	if (*haystack == needle)
		return ((char*)haystack);
	return (NULL);
}
