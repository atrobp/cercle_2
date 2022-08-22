/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atopalli <atopalli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 08:14:18 by atopalli          #+#    #+#             */
/*   Updated: 2022/08/22 08:41:35 by atopalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"


int	destroyme(t_list *vars)
{
	mlx_destroy_window(vars->mlx, vars->win);
	exit(0);
	return (0);
}

void	my_mlx_pixel_put(t_list *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

// int	main(void)
// {
// 	t_list	vars;

// 	vars.mlx = mlx_init();
// 	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello world!");
// 	vars.img = mlx_new_image(vars.mlx, 1920, 1080);
// 	vars.addr = mlx_get_data_addr(vars.img, &vars.bits_per_pixel, &vars.line_length, &vars.endian);
// 	// my_mlx_pixel_put(&vars, 500, 500, 0x00FF0000);
// 	mlx_put_image_to_window(vars.mlx, vars.win, vars.img, 0, 0);
// 	mlx_pixel_put(mlx, win, 50, i, 0xFFFFFF);
// 	mlx_loop(vars.mlx);
// }

int	main(void)
{
	t_mlx	mlx;
	int		i, fin;

	i = 1920 / 2 - 2;
	fin = 0;
	mlx.mlx = mlx_init();
	mlx.window = mlx_new_window(mlx.mlx, 1920, 1080, "FdF");
	mlx_string_put(mlx.mlx, mlx.window, 1920/2, 1080/2, 0x00aaffcc, "arber");

	while (fin <= 55)
	{
		mlx_pixel_put(mlx.mlx, mlx.window, i + fin, 1080 / 2, 0x00FFFFFF);
		mlx_pixel_put(mlx.mlx, mlx.window, 1920 / 2 - 2, 1080 / 2 + fin, 0x00FFFFFF);
		mlx_pixel_put(mlx.mlx, mlx.window, i + fin, 1080 / 2 + 25, 0x00FFFFFF);
		mlx_pixel_put(mlx.mlx, mlx.window, 1920 / 2 + 54, 1080 / 2 + fin, 0x00FFFFFF);
		fin += 1;
	}
	// mlx_pixel_put(mlx.mlx, mlx.window, i, 1080/2, 0x00FF0000);
	// mlx_pixel_put(mlx.mlx, mlx.window, 505, 500, 0x00FF0000);
	mlx_hook(mlx.window, 17, 0L, destroyme, &mlx);
    mlx_loop(mlx.mlx);
}
