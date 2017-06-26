/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_justify_right.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 18:05:58 by slee              #+#    #+#             */
/*   Updated: 2016/12/19 18:07:26 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putnbr_justify_right(int number
											, size_t total
											, char fill)
{
	char			*string;

	string = ft_itoa(number);
	ft_putstr_justify_right(string, total, fill);
	free(string);
}
