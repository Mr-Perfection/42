/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:16:36 by slee              #+#    #+#             */
/*   Updated: 2016/11/08 19:28:40 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int number, int file_descriptor)
{
	char	*string;

	string = ft_itoa(number);
	ft_putstr_fd(string, file_descriptor);
	free(string);
}
