/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_total_block_size.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 16:14:27 by slee              #+#    #+#             */
/*   Updated: 2017/01/21 17:57:35 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void				print_total_block_size(t_list *entries)
{
	unsigned long long	total;
	char				*string;

	total = 0;
	while (entries)
	{
		total += lstat_if_sym(((t_entry*)entries->data))->st_blocks;
		entries = entries->next;
	}
	ft_putstr("total ");
	string = ft_itoa_ularge(total);
	ft_putstr(string);
	free(string);
	ft_putchar('\n');
}
