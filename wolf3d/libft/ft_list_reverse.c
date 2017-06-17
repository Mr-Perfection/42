/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 19:11:36 by slee              #+#    #+#             */
/*   Updated: 2016/09/10 19:27:09 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list		*this_one;
	t_list		*next_one;
	t_list		*last;

	this_one = *begin_list;
	last = NULL;
	while (this_one != NULL)
	{
		next_one = this_one->next;
		this_one->next = last;
		last = this_one;
		this_one = next_one;
	}
	*begin_list = last;
}
