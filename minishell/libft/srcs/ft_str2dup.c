/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 16:35:27 by slee              #+#    #+#             */
/*   Updated: 2017/06/06 16:35:28 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		**ft_str2dup(char **array)
{
	char	**dup;
	int		i;

	i = 0;
	if ((dup = (char **)malloc(sizeof(char *) * (ft_str2len(array) + 1))))
	{
		while (array[i])
		{
			dup[i] = ft_strdup(array[i]);
			i++;
		}
		dup[i] = NULL;
	}
	return (dup);
}
