/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrnl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 17:46:32 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 17:46:34 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void	fprint(long num)
{
	char	c;

	if (num < 10)
	{
		c = num + 48;
		write(1, &c, 1);
		return ;
	}
	fprint(num / 10);
	fprint(num % 10);
}

void		ft_putnbrnl(int n)
{
	char	c;

	c = '-';
	if (n < 0)
	{
		write(1, &c, 1);
		n = n * -1;
	}
	fprint(n);
	ft_putchar('\n');
}
