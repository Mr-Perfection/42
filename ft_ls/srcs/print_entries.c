/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_entries.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 15:37:19 by slee              #+#    #+#             */
/*   Updated: 2017/01/21 18:29:11 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void			loop_through_entries(t_list *entries
											, t_strlens *strlens
											, t_options *options)
{
	t_entry			*entry;
	t_bool			first_printed;

	first_printed = 1;
	while (entries)
	{
		entry = (t_entry*)entries->data;
		if (should_print_entry(entry, options))
		{
			if (first_printed
					&& options->long_format && !options->handling_screwups)
				print_total_block_size(entries);
			print_entry(entry, options, strlens);
			first_printed = 0;
		}
		entries = entries->next;
	}
	if (!first_printed)
		options->printed_folder_already = 1;
}

void				print_entries(t_list *entries, t_options *options)
{
	t_strlens		strlens;

	if (options->long_format)
		prepare_file_options(&strlens, entries, options);
	loop_through_entries(entries, &strlens, options);
}
