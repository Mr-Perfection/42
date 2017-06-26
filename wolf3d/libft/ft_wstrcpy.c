/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 17:09:24 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 17:09:25 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_wset(int *b, int c, size_t len)
{
	int		*m;

	m = b;
	while (len-- > 0)
		*m++ = c;
	return (b);
}

wchar_t	*ft_wstrsub(wchar_t const *s, unsigned int start, size_t len)
{
	wchar_t	*str;

	str = ft_wstrnew(len);
	if (!str)
		return (str);
	ft_memmove(str, s + start, len * 4);
	return (str);
}

wchar_t	*ft_wstrcpy(wchar_t *dst, const wchar_t *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

wchar_t	*ft_wstrcat(wchar_t *s1, const wchar_t *s2)
{
	wchar_t	*str;

	str = s1;
	while (*str)
		str++;
	while (*s2)
		*str++ = *s2++;
	*str = 0;
	return (s1);
}
