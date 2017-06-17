/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:47:31 by slee              #+#    #+#             */
/*   Updated: 2016/11/09 18:59:24 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *source, size_t len)
{
	char	copy[len];

	ft_memcpy(copy, source, len);
	ft_memcpy(dest, copy, len);
	return (dest);
}
