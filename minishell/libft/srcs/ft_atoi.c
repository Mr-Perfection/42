/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 09:05:04 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 09:24:45 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_converter(const char *nptr, int sign)
{
	int		result;

	result = 0;
	while (*nptr != '\0' && *nptr > 47 && *nptr < 58)
	{
		result = result * 10 + *nptr - 48;
		nptr++;
	}
	if (sign < 0)
		result = -result;
	return (result);
}

int			ft_atoi(const char *nptr)
{
	int		sign;

	sign = 0;
	while (*nptr != '\0' && sign == 0 &&
	(*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\r'
	|| *nptr == '\f' || *nptr == '\v'
	|| *nptr == '+' || *nptr == '-'))
	{
		if (*nptr == '+')
			sign++;
		else if (*nptr == '-')
			sign--;
		nptr++;
	}
	return (ft_converter(nptr, sign));
}
