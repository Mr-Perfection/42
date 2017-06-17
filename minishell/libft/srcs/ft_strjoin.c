/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 10:16:32 by slee              #+#    #+#             */
/*   Updated: 2017/06/09 18:22:00 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	str = ft_strnew(len_s1 + ft_strlen(s2));
	if (str != NULL)
	{
		i = 0;
		while (i < len_s1)
		{
			str[i] = s1[i];
			i++;
		}
		i = 0;
		while (i < ft_strlen(s2))
		{
			str[i + len_s1] = s2[i];
			i++;
		}
		str[i + len_s1] = '\0';
	}
	return (str);
}
