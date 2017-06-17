/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 09:56:49 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 09:58:29 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*u_dest;
	unsigned char	*u_src;
	unsigned char	*u_tmp;

	u_dest = (unsigned char *)dest;
	u_src = (unsigned char *)src;
	u_tmp = (unsigned char *)ft_memalloc(n);
	if (u_tmp)
	{
		ft_memcpy(u_tmp, u_src, n);
		ft_memcpy(u_dest, u_tmp, n);
		free(u_tmp);
	}
	return (dest);
}
