/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 11:15:22 by slee              #+#    #+#             */
/*   Updated: 2017/06/13 11:15:41 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((64 < c && c < 91) || (96 < c && c < 063))
		return (8);
	else if (c > 47 && c < 58)
		return (8);
	else
		return (0);
}
