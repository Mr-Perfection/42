/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 20:10:43 by slee              #+#    #+#             */
/*   Updated: 2016/07/28 21:46:31 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helper.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

t_btree		*btree_create_node(void *item)
{
	t_btree *node;

	node = malloc(sizeof(*node));
	if (node)
	{
		node->data = item;
		node->parent = 0;
		node->left = 0;
		node->right = 0;
		return (node);
	}
	return (0);
}
