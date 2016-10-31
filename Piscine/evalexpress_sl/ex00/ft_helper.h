/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 20:03:36 by slee              #+#    #+#             */
/*   Updated: 2016/07/28 21:48:57 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HELPER_H
# define FT_HELPER_H

# include <unistd.h>

typedef struct	s_btree
{
	void			*data;
	struct s_btree	*parent;
	struct s_btree	*right;
	struct s_btree	*left;
}				t_btree;

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int		eval_expr(char *str);

t_btree		*btree_create_node(void *item);
#endif
