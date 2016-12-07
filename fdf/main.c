/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 23:45:10 by slee              #+#    #+#             */
/*   Updated: 2016/12/04 23:45:12 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	t_fdf	*fdf;
	t_mlx	*mlx;

	validate_num_args(argc);
	fdf = init_fdf();
	read_file(argv[1], fdf);
	mlx = init_mlx();
	parse(fdf);
	draw(mlx, fdf);
	run_fdf(mlx, fdf);
	return (0);
}
