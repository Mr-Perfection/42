/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:42:42 by slee              #+#    #+#             */
/*   Updated: 2016/11/08 11:51:38 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *string
							, char (*func)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	new = malloc(sizeof(char) * ft_strlen(string));
	i = 0;
	while (string[i])
	{
		new[i] = func(i, string[i]);
		i++;
	}
	return (new);
}
