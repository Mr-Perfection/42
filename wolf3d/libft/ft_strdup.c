/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:56:43 by slee              #+#    #+#             */
/*   Updated: 2016/11/07 15:01:38 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *source)
{
	char	*new;

	new = malloc(ft_strlen(source) + 1);
	if (new == NULL)
		return (NULL);
	ft_strcpy(new, source);
	return (new);
}
