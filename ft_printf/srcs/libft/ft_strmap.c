/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:17:54 by slee              #+#    #+#             */
/*   Updated: 2017/01/13 16:21:15 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	s_len;
	char	*ptr;
	char	*result;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	if ((result = ft_strnew(s_len)) == NULL)
		return (NULL);
	ptr = result;
	while (s_len--)
		*ptr++ = f(*s++);
	return (result);
}
