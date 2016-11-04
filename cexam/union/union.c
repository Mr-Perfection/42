/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 22:40:10 by slee              #+#    #+#             */
/*   Updated: 2016/10/31 23:01:10 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main (int argc, char *argv[])
{
	if (argc == 3)
	{
		char *str1 = argv[1];
		char *str2 = argv[2];
		int check[256] = {0};
		int temp = 0;
		int i = 0;

		
		
		while (str1[i] != '\0')
		{
			temp = str1[i];
			if (check[temp] == 0)
			{
				write(1, &str1[i], 1);
				check[temp] = 1;												               
			}
			i++;
		}
		i = 0;
		while (str2[i] != '\0')
		{
			temp = str2[i];
			if (check[temp] == 0)
			{
				write(1, &str2[i], 1);
				check[temp] = 1;												               
			}
			i++;
		}
	
	}

	write(1, "\n", 1);
}
