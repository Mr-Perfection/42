/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:29:26 by slee              #+#    #+#             */
/*   Updated: 2016/11/01 23:45:40 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	if (size == 0)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
