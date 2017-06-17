/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 16:05:56 by slee              #+#    #+#             */
/*   Updated: 2016/09/10 16:10:10 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_one;

	new_one = ft_list_create_elem(data);
	new_one->next = *begin_list;
	*begin_list = new_one;
}
