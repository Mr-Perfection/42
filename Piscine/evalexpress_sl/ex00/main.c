/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 19:57:57 by slee              #+#    #+#             */
/*   Updated: 2016/07/28 20:53:11 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int num);

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(12313);
		ft_putstr(av[1]);
		// ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
