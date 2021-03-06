/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_wfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:26:31 by slee              #+#    #+#             */
/*   Updated: 2017/01/13 16:26:36 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	pf_wstrlen(wchar_t *s)
{
	size_t	i;
	size_t	total;

	total = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] <= 0x7F && ++i)
			total++;
		else if (s[i] <= 0x7FF && ++i)
			total += 2;
		else if (s[i] <= 0xFFFF && ++i)
			total += 3;
		else if (s[i] <= 0x10FFFF && ++i)
			total += 4;
	}
	return (total);
}

size_t	pf_wlen(wchar_t *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	pf_wide_dims_adj(t_flag *flag)
{
	size_t	i;
	size_t	total;

	total = 0;
	i = 0;
	while (flag->woutput[i])
	{
		if (flag->woutput[i] <= 0x7F && ++i)
			total++;
		else if (flag->woutput[i] <= 0x7FF && ++i)
			total += 2;
		else if (flag->woutput[i] <= 0xFFFF && ++i)
			total += 3;
		else if (flag->woutput[i] <= 0x10FFFF && ++i)
			total += 4;
		if (total > flag->prec)
			break ;
	}
	return (--i);
}

int		pf_is_ascii(wchar_t *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		if (s[i++] > 0x7F)
			return (0);
	return (1);
}
