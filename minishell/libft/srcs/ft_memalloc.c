/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 09:45:06 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 09:46:27 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	size_t	i;
	char	*mem;

	mem = (char *)malloc(sizeof(*mem) * size);
	if (mem != NULL)
	{
		i = 0;
		while (i < size)
		{
			mem[i] = '\0';
			i++;
		}
	}
	return ((void *)mem);
}
