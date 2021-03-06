/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 12:45:54 by slee              #+#    #+#             */
/*   Updated: 2016/12/19 12:45:56 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3	vecopplus(t_vec3 *a, double x)
{
	t_vec3 v;

	v.x = a->x + x;
	v.y = a->y + x;
	v.z = a->z + x;
	return (v);
}

t_vec3	vecopdiv(t_vec3 *a, double x)
{
	t_vec3 v;

	v.x = a->x / x;
	v.y = a->y / x;
	v.z = a->z / x;
	return (v);
}

t_vec3	vecdiv(t_vec3 *a, t_vec3 *b)
{
	t_vec3	v;

	v.x = a->x / b->x;
	v.y = a->y / b->y;
	v.z = a->z / b->z;
	return (v);
}

t_vec3	vecreflect(t_vec3 *i, t_vec3 *n)
{
	t_vec3	v;

	v.x = i->x - 2.0 * vecdot(n, i) * n->x;
	v.y = i->y - 2.0 * vecdot(n, i) * n->y;
	v.z = i->z - 2.0 * vecdot(n, i) * n->z;
	return (v);
}

void	vecclamp(t_vec3 *vec, double a, double b)
{
	vec->x = ft_clamp(vec->x, a, b);
	vec->y = ft_clamp(vec->y, a, b);
	vec->z = ft_clamp(vec->z, a, b);
}
