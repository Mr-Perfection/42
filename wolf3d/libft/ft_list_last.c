/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 16:25:11 by slee              #+#    #+#             */
/*   Updated: 2016/09/10 16:40:15 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_list_last(t_list *begin_list)
{
	if (begin_list->next == NULL)
		return (begin_list);
	return (ft_list_last(begin_list->next));
}
