/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 11:57:59 by slee              #+#    #+#             */
/*   Updated: 2016/11/08 19:12:48 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dest, const void *source
							, int stopper, size_t len)
{
	size_t			i;
	char			curr;

	i = 0;
	while (i < len)
	{
		curr = ((char*)source)[i];
		((char*)dest)[i] = curr;
		i++;
		if (curr == stopper)
			return ((char*)dest + i);
	}
	return (NULL);
}
