/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 16:35:36 by slee              #+#    #+#             */
/*   Updated: 2017/06/06 16:35:37 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_str2len(char **array)
{
	int i;

	i = 0;
	if (array)
	{
		while (array[i])
		{
			i++;
		}
	}
	return (i);
}
