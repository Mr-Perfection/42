/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 15:51:13 by slee              #+#    #+#             */
/*   Updated: 2016/08/04 16:55:02 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	check_prime(int num)
{
	int n;

	n = 2;
	while(n < num)
	{
		if(num % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int helper(int max, int min, int sol)
{
	if(min > max)
		return (sol);
	if(check_prime(min))
		return helper(max, min + 1, sol + min);
	else
		return helper(max, min + 1, sol);
}

int ft_atoi(char *c)
{
	int i;
	int ans;

	ans = 0;
	i = 0;
	while(c[i])
	{
		if(c[i] != '\0')
			ans *= 10;
		if(!(c[i] >= '0' && c[i] <= '9'))
			return (-1);
		ans += c[i] - '0';
		i++;
	}
	return (ans);
}

void ft_print_itochar(int i)
{
	char c;
	if(i == 0)
		return ;
	ft_print_itochar(i / 10);
	c = i - i / 10 * 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int num;

	if(argc != 2 || (num = ft_atoi(argv[1])) == -1 || num == 1)
	{
		write(1,"0\n",2);
		return (0);
	}
	num = helper(num, 2, 0);
	ft_print_itochar(num);
	write(1,"\n",1);
}