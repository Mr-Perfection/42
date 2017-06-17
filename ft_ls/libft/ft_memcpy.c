/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:54:44 by slee              #+#    #+#             */
/*   Updated: 2016/11/07 15:01:38 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dest, const void *source, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		((char*)dest)[i] = ((char*)source)[i];
		i++;
	}
	return (dest);
}
