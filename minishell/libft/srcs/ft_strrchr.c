/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 10:28:13 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 10:29:06 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		len;

	if (!s)
		return (NULL);
	len = (int)ft_strlen(s);
	while (len >= 0 && s[len] != c)
		len--;
	if (s[len] == c)
		return ((char *)&s[len]);
	return (NULL);
}
