/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:11:40 by slee              #+#    #+#             */
/*   Updated: 2016/11/09 19:02:26 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace_small(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char			*ft_strtrim(char const *original)
{
	char	*new;
	size_t	begin;
	size_t	end;
	size_t	i;

	begin = 0;
	while (original[begin] && ft_isspace_small(original[begin]))
		begin++;
	end = ft_strchr(original + begin, '\0') - original;
	while (end > begin && ft_isspace_small(original[end - 1]))
		end--;
	if (end < begin)
		end = begin;
	new = malloc(sizeof(char) * (end - begin + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i + begin < end)
	{
		new[i] = original[begin + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
