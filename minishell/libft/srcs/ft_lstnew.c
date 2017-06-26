/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 09:44:09 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 09:45:06 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*my_list;

	if ((my_list = (t_list *)malloc(sizeof(t_list))))
	{
		if (content)
		{
			my_list->content = malloc(sizeof(content) * content_size);
			ft_memcpy(my_list->content, content, content_size);
			my_list->content_size = content_size;
		}
		else
		{
			my_list->content = NULL;
			my_list->content_size = 0;
		}
		my_list->next = NULL;
	}
	return (my_list);
}
