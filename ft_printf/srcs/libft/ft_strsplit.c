/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:17:54 by slee              #+#    #+#             */
/*   Updated: 2017/01/13 16:21:15 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	*tempstr;
	char	**result;

	if (!s || (result = ft_strarrnew(0)) == NULL)
		return (NULL);
	while (*s)
	{
		if ((tempstr = ft_strnew(0)) == NULL)
			return (NULL);
		while (*s == c)
			s++;
		if (!*s)
			break ;
		while (*s != c && *s)
			if ((tempstr = ft_realloc_c(&tempstr, *s++)) == NULL)
				return (NULL);
		if (*tempstr)
			if ((result = ft_realloc_s(&result, tempstr)) == NULL)
				return (NULL);
		if (*s)
			s++;
	}
	return (result);
}
