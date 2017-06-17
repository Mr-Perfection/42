/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 15:33:24 by slee              #+#    #+#             */
/*   Updated: 2017/01/21 18:21:53 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strcount(char const *haystack, char const needle)
{
	size_t			count;

	while (haystack)
	{
		if (*haystack == needle)
			count++;
		haystack++;
	}
	return (count);
}
