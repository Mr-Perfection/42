/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   should_print_folder.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 18:26:40 by slee              #+#    #+#             */
/*   Updated: 2017/01/21 18:26:48 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int					name_begins_with_dot(char *long_name)
{
	char			*folder;

	folder = ft_strchr(long_name, '\0');
	while (folder > long_name && *(folder - 1) != '/')
		folder--;
	return (*folder == '.');
}

int					should_print_folder(char *long_name
											, t_options *options)
{
	if (options->handling_recursives && !options->show_all)
		return (!name_begins_with_dot(long_name));
	return (1);
}
