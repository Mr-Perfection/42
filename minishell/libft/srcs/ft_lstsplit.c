/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 18:22:46 by slee              #+#    #+#             */
/*   Updated: 2017/06/09 18:25:04 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstsplit(char **strsplit)
{
	int		k;
	t_list	*lstsplit;
	t_list	*elem;

	k = 0;
	if (!strsplit[k])
		return (NULL);
	lstsplit = NULL;
	while (strsplit[k] != NULL)
	{
		if (k == 0)
		{
			lstsplit = ft_lstnew(strsplit[k], ft_strlen(strsplit[k]) + 1);
			k++;
		}
		else
		{
			elem = ft_lstnew(strsplit[k], ft_strlen(strsplit[k]) + 1);
			ft_lstadd_end(&lstsplit, elem);
			k++;
		}
	}
	return (lstsplit);
}
