/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 14:41:37 by slee              #+#    #+#             */
/*   Updated: 2016/11/01 23:46:31 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int character)
{
	int	i;

	i = 0;
	while (string[0])
	{
		if (string[0] == character)
			return ((char *)string);
		else
			string += 1;
	}
	if (string[0] == character)
		return ((char *)string);
	return (0);
}
