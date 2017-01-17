/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:17:54 by slee              #+#    #+#             */
/*   Updated: 2017/01/13 16:21:15 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					sign;
	int					nxt_digit;
	unsigned long long	result;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nxt_digit = *str++ - '0';
		if (sign == 1 && (result >= 922337203685477581 ||
						(result == 922337203685477580 && nxt_digit > 7)))
			return (-1);
		if (sign == -1 && (result >= 922337203685477581 ||
						(result == 922337203685477580 && nxt_digit > 8)))
			return (0);
		result *= 10;
		result += nxt_digit;
	}
	return (((int)result) * sign);
}
