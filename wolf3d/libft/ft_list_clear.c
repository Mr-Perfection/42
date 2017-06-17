/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 17:15:04 by slee              #+#    #+#             */
/*   Updated: 2017/01/23 18:51:52 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		destroy_list(t_list *list, void (*free_inside)())
{
	if (list->next != NULL)
		destroy_list(list->next, free_inside);
	if (free_inside)
		free_inside(list->data);
	free(list);
}

void			ft_list_clear(t_list **begin_list, void (*free_inside)())
{
	destroy_list(*begin_list, free_inside);
	*begin_list = NULL;
}
