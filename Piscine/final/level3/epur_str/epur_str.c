/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 17:12:28 by slee              #+#    #+#             */
/*   Updated: 2016/08/04 18:19:57 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if ((i == 0 && str[i] == ' ') ||
			str[i] == '\n' || str[i] == '\t')
		{
			++i;
			continue ;
		}
		if(str[i] == ' ' && str[i - 1] == ' ')
		{
			++i;
			continue ;
		}
		if (str[i + 1] == '\0' && (str[i] == ' ' ||
			str[i] == '\n' || str[i] == '\t'))
		{
			++i;
			continue ;
		}
		write(1, &str[i], 1);
		++i;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2 || argv[1] == 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	epur_str(argv[1]);
	write(1, "\n", 1);
}