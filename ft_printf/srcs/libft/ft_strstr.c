/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:17:54 by slee              #+#    #+#             */
/*   Updated: 2017/01/13 16:21:15 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	const char	*lil_ptr;
	const char	*big_ptr;
	size_t		lil_len;
	size_t		big_len;

	if (*little == '\0')
		return ((char*)big);
	lil_len = ft_strlen(little);
	big_len = ft_strlen(big);
	while (big_len-- >= lil_len)
	{
		lil_ptr = little;
		big_ptr = big;
		while (*lil_ptr++ == *big_ptr++)
		{
			if (*lil_ptr == '\0')
				return ((char*)big);
		}
		big++;
	}
	return (NULL);
}
