/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 10:38:09 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 10:38:55 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;

	start = 0;
	end = (int)ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	if (start == end + 1)
		return (ft_strnew(0));
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	return (ft_strsub(s, (unsigned int)start,
				(unsigned int)(end - start + 1)));
}
