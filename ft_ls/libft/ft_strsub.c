/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:52:27 by slee              #+#    #+#             */
/*   Updated: 2016/11/10 13:58:48 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *source, size_t start, size_t len)
{
	char		*substring;

	substring = ft_strnew(len);
	if (!substring)
		return (NULL);
	ft_strncpy(substring, source + (start * sizeof(char)), len);
	return (substring);
}
