/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:17:54 by slee              #+#    #+#             */
/*   Updated: 2017/01/13 16:21:15 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	long long	nbr;
	size_t		digit_c;
	int			sign;
	char		*ptr;
	char		*result;

	nbr = (long long)n;
	sign = 1;
	if (nbr < 0)
		sign = -1;
	digit_c = 1;
	while (nbr / ft_pow(10, digit_c))
		digit_c++;
	if ((result = ft_strnew((sign == 1) ? digit_c : digit_c + 1)) == NULL)
		return (NULL);
	ptr = result;
	if (sign == -1)
		*ptr++ = '-';
	while (digit_c--)
	{
		*ptr++ = (sign * nbr / ft_pow(10, digit_c)) + '0';
		nbr %= ft_pow(10, digit_c);
	}
	return (result);
}
