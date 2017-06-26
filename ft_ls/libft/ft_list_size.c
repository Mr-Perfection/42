/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 16:10:52 by slee              #+#    #+#             */
/*   Updated: 2016/09/10 16:23:51 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_list_size(t_list *begin_list)
{
	if (begin_list->next == NULL)
		return (1);
	return (1 + ft_list_size(begin_list->next));
}
