/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_type_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:59:36 by slee              #+#    #+#             */
/*   Updated: 2017/01/22 22:11:41 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char				get_file_type_char(t_entry *entry)
{
	if (entry->is_symlink)
		return ('l');
	if (S_ISBLK(entry->stat->st_mode))
		return ('b');
	else if (entry->stat->st_mode & S_IFCHR)
		return ('c');
	else if (S_ISSOCK(entry->stat->st_mode))
		return ('s');
	else if (entry->stat->st_mode & S_IFIFO)
		return ('p');
	else if (entry->stat->st_mode & S_IFDIR)
		return ('d');
	return ('-');
}
