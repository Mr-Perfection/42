/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:17:54 by slee              #+#    #+#             */
/*   Updated: 2017/01/13 16:21:15 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	int		digit_c;

	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else if (n / 10 == 0)
		ft_putchar(n + '0');
	else
	{
		digit_c = 10;
		while (n / digit_c >= 10)
			digit_c *= 10;
		ft_putnbr(n / digit_c);
		while (digit_c > 10 && n % digit_c == n % (digit_c / 10))
		{
			ft_putchar('0');
			digit_c /= 10;
		}
		ft_putnbr(n % digit_c);
	}
}
