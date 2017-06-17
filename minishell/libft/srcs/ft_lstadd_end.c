/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 09:33:52 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 09:34:29 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_end(t_list **alst, t_list *new)
{
	t_list	*cursor;

	if (*alst && new)
	{
		cursor = *alst;
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new;
	}
}
