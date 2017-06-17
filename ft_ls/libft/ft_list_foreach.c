/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 15:44:53 by slee              #+#    #+#             */
/*   Updated: 2016/12/11 15:50:45 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_list_foreach(t_list *list, void (*function)(void*))
{
	while (list)
	{
		function(list->data);
		list = list->next;
	}
}
