/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 10:21:21 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 10:21:55 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * len);
	i = 0;
	if (str)
	{
		while (i < len)
		{
			str[i] = (*f)((unsigned int)i, s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
