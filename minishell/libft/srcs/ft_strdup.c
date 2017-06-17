/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 10:13:06 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 10:13:53 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*new;
	size_t	i;
	size_t	len_str;

	if (str == NULL)
		return (NULL);
	len_str = ft_strlen(str);
	new = (char *)malloc(sizeof(char) * (len_str + 1));
	if (new != NULL)
	{
		i = 0;
		while ((str[i] != '\0') && (i < len_str))
		{
			new[i] = str[i];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
