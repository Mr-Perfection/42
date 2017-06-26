/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:33:27 by slee              #+#    #+#             */
/*   Updated: 2016/11/09 19:00:30 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strncmp(const char *first, const char *second, size_t max)
{
	size_t		i;

	i = 0;
	while (i < max && first[i] && second[i] && first[i] == second[i])
		i++;
	if (i == max)
		return (0);
	return ((unsigned char)first[i] - (unsigned char)second[i]);
}
