/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 00:13:36 by slee              #+#    #+#             */
/*   Updated: 2016/12/05 00:13:54 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t len)
{
	char	*copy;

	if (len > ft_strlen(str))
		len = ft_strlen(str);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_strncpy(copy, str, len);
	copy[len] = '\0';
	return (copy);
}
