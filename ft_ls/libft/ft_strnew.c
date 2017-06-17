/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:35:02 by slee              #+#    #+#             */
/*   Updated: 2017/01/16 13:14:38 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** old implementation: return (ft_memalloc(size + 1));
*/

char			*ft_strnew(size_t size)
{
	char		*string;

	string = malloc((size + 1) * sizeof(char));
	string[size] = '\0';
	return (string);
}
