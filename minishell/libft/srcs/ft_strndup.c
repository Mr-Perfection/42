/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 18:40:30 by slee              #+#    #+#             */
/*   Updated: 2017/06/09 18:40:45 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strndup(const char *s, size_t n)
{
	char	*new_str;
	size_t	i;

	if (!s && ft_strlen(s) > n)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (n + 1));
	if (new_str != NULL && s)
	{
		i = 0;
		while (s[i] && (i < n))
		{
			new_str[i] = s[i];
			i++;
		}
		new_str[i] = '\0';
	}
	return (new_str);
}
