/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_create_elem.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 13:58:38 by slee              #+#    #+#             */
/*   Updated: 2016/12/01 16:29:39 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_list_create_elem(void *data)
{
	t_list *new_thingy;

	new_thingy = malloc(sizeof(t_list));
	new_thingy->data = data;
	new_thingy->next = NULL;
	return (new_thingy);
}
