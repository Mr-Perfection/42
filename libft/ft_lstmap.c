/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:30:43 by slee              #+#    #+#             */
/*   Updated: 2016/11/03 19:22:10 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *curr;
	t_list *tail;
	t_list *head;

	head = NULL;
	while (f && lst)
	{
		tail = malloc(sizeof(t_list));
		if (!tail)
			return (NULL);
		tail = f(lst);
		if (!head)
		{
			head = tail;
			curr = tail;
		}
		else
		{
			curr->next = tail;
			curr = curr->next;
		}
		lst = lst->next;
	}
	return (head);
}
