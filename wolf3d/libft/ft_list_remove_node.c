/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 15:37:55 by slee              #+#    #+#             */
/*   Updated: 2017/01/22 22:43:10 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** removes the t_list node from the list original
** NOTE: need to do free(old_one) in line 34 (insert)
*/

#include "libft.h"

void					ft_list_remove_node(t_list **original
											, t_list *to_remove
											, void (*free_inside)(void*))
{
	t_list				*old_one;

	if (original && *original && to_remove)
	{
		if (*original == to_remove)
		{
			old_one = *original;
			*original = (*original)->next;
			if (free_inside)
				free_inside(old_one->data);
		}
		else
			ft_list_remove_node(&((*original)->next), to_remove, free_inside);
	}
}
