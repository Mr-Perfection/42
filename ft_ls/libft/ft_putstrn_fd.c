/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 17:28:28 by slee              #+#    #+#             */
/*   Updated: 2017/01/21 18:21:39 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putstrn_fd(char const *source, size_t max_length
								, int file_descriptor)
{
	size_t		length;

	length = ft_strlen(source);
	if (max_length < length)
		length = max_length;
	write(file_descriptor, source, length);
}
