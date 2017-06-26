/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 17:10:30 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 17:10:33 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		*ft_maxmap(int *n, size_t l)
{
	int		*max;
	size_t	i;

	if (!n)
		return (NULL);
	max = n;
	i = 1;
	while (i++ < l)
	{
		n++;
		if (*n > *max)
			max = n;
	}
	return (max);
}
