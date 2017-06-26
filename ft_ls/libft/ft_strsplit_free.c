/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 16:42:48 by slee              #+#    #+#             */
/*   Updated: 2016/11/28 16:46:03 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Frees the thing created by ft_strsplit
*/

void			ft_strsplit_free(char **thing)
{
	size_t		i;

	i = 0;
	while (thing[i])
	{
		free(thing[i]);
		i++;
	}
	free(thing);
}
