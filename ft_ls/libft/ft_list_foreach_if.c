/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:38:52 by slee              #+#    #+#             */
/*   Updated: 2016/11/07 15:01:01 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_list_foreach_if(t_list *list
								, void (*function)(void *)
								, void *data_ref
								, int (*compare)())
{
	while (list)
	{
		if (compare(list->data, data_ref))
			function(list->data);
		list = list->next;
	}
}
