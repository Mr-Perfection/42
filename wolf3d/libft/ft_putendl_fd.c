/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:16:15 by slee              #+#    #+#             */
/*   Updated: 2016/11/08 12:27:29 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putendl_fd(char const *source, int file_descriptor)
{
	ft_putstr_fd(source, file_descriptor);
	ft_putchar_fd('\n', file_descriptor);
}
