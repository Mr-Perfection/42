/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 17:34:34 by slee              #+#    #+#             */
/*   Updated: 2016/09/10 19:02:50 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (begin_list->next == NULL && nbr >= 2)
		return (NULL);
	if (nbr == 1)
		return (begin_list);
	return (ft_list_at(begin_list->next, nbr - 1));
}
