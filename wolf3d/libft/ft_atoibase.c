/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoibase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 17:09:35 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 17:09:36 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static long	ft_create_number(const char *str, int b, int i)
{
	long	n;

	n = 0;
	if (b > 10)
	{
		while ((str[i] >= '0' && str[i] <= '9') ||
			(str[i] >= 'A' && str[i] <= ('A' + b - 10)))
		{
			if (str[i] >= '0' && str[i] <= '9')
				n = b * n - (str[i++] - '0');
			if (str[i] >= 'A' && str[i] <= ('A' + b - 10))
				n = b * n - (str[i++] - 'A' + 10);
		}
	}
	else if (b > 0)
	{
		while (str[i] >= '0' && str[i] <= ('0' + b))
			n = b * n - (str[i++] - '0');
	}
	return (n);
}

int			ft_atoibase(const char *str, int b)
{
	int		i;
	int		neg;
	long	num;

	if (b <= 1)
		return (0);
	i = 0;
	neg = -1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	num = ft_create_number(str, b, i);
	num *= neg;
	return (num);
}
