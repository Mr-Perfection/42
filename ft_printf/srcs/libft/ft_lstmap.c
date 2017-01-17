/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:17:54 by slee              #+#    #+#             */
/*   Updated: 2017/01/13 16:21:15 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*body;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	if ((head = ft_lstnew(temp->content, temp->content_size)) == NULL)
		return (NULL);
	body = head;
	while (lst->next != NULL)
	{
		lst = lst->next;
		temp = f(lst);
		if ((body->next = ft_lstnew(temp->content, temp->content_size)) == NULL)
			return (NULL);
		body = body->next;
	}
	return (head);
}
