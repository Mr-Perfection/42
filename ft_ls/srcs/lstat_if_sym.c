/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstat_if_sym.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 15:38:10 by slee              #+#    #+#             */
/*   Updated: 2017/01/16 15:38:12 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_stat				*lstat_if_sym(t_entry *entry)
{
	if (entry->is_symlink)
		return (entry->lstat);
	else
		return (entry->stat);
}
