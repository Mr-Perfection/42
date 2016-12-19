/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 00:43:31 by slee              #+#    #+#             */
/*   Updated: 2016/12/05 00:43:33 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_strpos(char *str, char c)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str == c)
			return (str - start);
		str++;
	}
	return (str - start);
}

static long			ft_strtol_rec(char **str, int sign, int base)
{
	long	endptr;
	int		i;

	endptr = 0;
	while (**str && (i = ft_strpos(ALPHANUMS, ft_tolower(**str))) < base)
	{
		if (sign == -1)
			endptr = endptr * base - i;
		else
			endptr = endptr * base + i;
		(*str)++;
	}
	return (endptr);
}

long				ft_strtol(char *str, char **endptr, int base)
{
	int		sign;
	long	result;

	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	result = ft_strtol_rec(&str, sign, base);
	*endptr = str;
	return (result);
}
