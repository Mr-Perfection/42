/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:09:46 by slee              #+#    #+#             */
/*   Updated: 2016/11/07 16:21:54 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_striteri(char *string, void (*func)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (string[i])
	{
		func(i, string + i);
		i++;
	}
}
