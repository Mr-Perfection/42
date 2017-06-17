/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_last_modified_time.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 23:05:56 by slee              #+#    #+#             */
/*   Updated: 2017/01/21 18:08:15 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int					compare_last_modified_time(struct stat *first
												, struct stat *second)
{
	return (second->st_mtimespec.tv_sec - first->st_mtimespec.tv_sec);
}
