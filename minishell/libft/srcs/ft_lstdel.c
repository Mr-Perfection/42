/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 09:34:47 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 09:35:35 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst && del)
	{
		while ((*alst) != NULL)
		{
			del((*alst)->content, ((*alst)->content_size));
			*alst = (*alst)->next;
		}
	}
	free(*alst);
	*alst = NULL;
}
