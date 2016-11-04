/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 19:57:57 by slee              #+#    #+#             */
/*   Updated: 2016/07/28 22:18:39 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helper.h"

t_btree	*stack[100];

int isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return 1;
    return 0;
}

void inorder(t_btree *n)
{
    if(n)
    {
        inorder(n->left);
        ft_putchar(n->data);
        inorder(n->right);
    }
}

int eval_expr(char *str)
{
	int i;

	i = 0;
	while(str[i++] != '\0')
	{
		
	}
}