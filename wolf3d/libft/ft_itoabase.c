/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 16:37:22 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 16:37:24 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_length(unsigned long n, int b)
{
	int				len;

	len = 0;
	if (!n)
		len = 1;
	while (n)
	{
		n /= b;
		len++;
	}
	return (len);
}

static void	ft_digits(char *a, unsigned long num, int len, unsigned int b)
{
	char		ch;

	if (!num)
		a[--len] = 48;
	while (len > 0)
	{
		ch = num % b;
		if (ch < 10)
			a[--len] = (ch + 48);
		else
			a[--len] = (ch + 55);
		num /= b;
	}
}

char		*ft_itoabase(unsigned long n, unsigned int b)
{
	int				len;
	unsigned long	num;
	char			*a;

	if (b <= 1)
		return (NULL);
	num = n;
	len = ft_length(num, b);
	a = ft_strnew(len);
	if (!a)
		return (a);
	ft_digits(a, num, len, b);
	return (a);
}
