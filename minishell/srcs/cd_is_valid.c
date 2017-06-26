/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 15:41:21 by slee              #+#    #+#             */
/*   Updated: 2017/06/16 15:41:22 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"

int		is_physical(char *str)
{
	if (ft_strcmp("-P", str) == 0)
		return (1);
	return (0);
}

int		is_logical(char *str)
{
	if (ft_strcmp("-L", str) == 0)
		return (1);
	return (0);
}

int		is_minus(char *str)
{
	if (ft_strcmp("-", str) == 0)
		return (1);
	return (0);
}
