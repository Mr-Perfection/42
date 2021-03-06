/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 10:09:39 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 10:10:27 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	size_t	len;
	size_t	i;

	if (s)
	{
		len = ft_strlen(s);
		len++;
		i = 0;
		while (i < len)
		{
			s[i] = '\0';
			i++;
		}
	}
}
