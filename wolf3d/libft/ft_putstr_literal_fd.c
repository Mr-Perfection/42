/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_literal_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 15:26:08 by slee              #+#    #+#             */
/*   Updated: 2017/01/08 15:26:09 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			print_literal(char c)
{
	if (c == '\n')
		ft_putstr("\\n");
	if (c == '\t')
		ft_putstr("\\t");
}

void				ft_putstr_literal_fd(char const *source)
{
	while (*source)
	{
		print_literal(*source);
		source++;
	}
}
