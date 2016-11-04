/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 14:04:47 by slee              #+#    #+#             */
/*   Updated: 2016/07/17 16:15:28 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c)
{
	write(1,&c,1);
	return 0;
}
void	ft_line(int size)
{
	int j;
	int start_ft_line;
	int start_astroid;
	int start_space;

	j = 0;
	start_astroid = 1;
	start_ft_line = 3;
	start_space = (size * (size + 1) + 2 * size);
	while (j < size)
	{
		start_space = start_space - 2;
		create_etage(start_ft_line, &start_space, &start_astroid);
		start_ft_line++;
		start_astroid = start_astroid + 4;
		j++;
	}
}

void	ft_line_repeat_etage(int etage)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 3 + etage - 1;
	size = 1;
	while (i < 3 + etage)
	{
		size_space(size, j);
		size += 2;
		i++;
		j--;
	}
}

void	create_etage(int nb_ft_line, int *nb_space_start, int *nb_astroid_start)
{
	int i;

	i = 0;
	while (i < nb_ft_line)
	{
		size_space(*nb_astroid_start, *nb_space_start);
		*nb_space_start = *nb_space_start - 1;
		*nb_astroid_start += 2;
		i++;
	}
}

void	size_space(int size, int space)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < space)
	{
		ft_putchar(' ');
		j++;
	}
	ft_putchar('/');
	while (i < size)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	sastantua(int size)
{
	ft_line(size);
}
