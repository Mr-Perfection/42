/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:17:54 by slee              #+#    #+#             */
/*   Updated: 2017/01/13 16:21:15 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		digit_c;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n / 10 == 0)
		ft_putchar_fd(n + '0', fd);
	else
	{
		digit_c = 10;
		while (n / digit_c >= 10)
			digit_c *= 10;
		ft_putnbr_fd(n / digit_c, fd);
		while (digit_c > 10 && n % digit_c == n % (digit_c / 10))
		{
			ft_putchar_fd('0', fd);
			digit_c /= 10;
		}
		ft_putnbr_fd(n % digit_c, fd);
	}
}
