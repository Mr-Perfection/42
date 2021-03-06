/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 14:40:23 by slee              #+#    #+#             */
/*   Updated: 2016/11/01 23:48:59 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long s;

	s = n;
	if (s < 0)
	{
		ft_putchar('-');
		s = -1 * s;
	}
	if (s > 9)
		ft_putnbr(s / 10);
	ft_putchar(s % 10 + '0');
}
