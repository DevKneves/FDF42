/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:37:32 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_closefdf(int keycode, t_vars *vars)
{
	if (keycode == 0xff1b)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		ft_printf("Esc pressed. Exiting program ...\n");
		exit (0);
	}
	return (1);
}

int	ft_startfdf(char *map)
{
	t_vars		vars;
	t_mapdata	mapdata;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1440, 900, "fdf");
	mapdata = ft_drawmap(map);
	ft_drawpoints(mapdata, vars.mlx, vars.win);
	mlx_hook(vars.win, 2, 1L << 0, ft_closefdf, &vars);
	mlx_loop(vars.mlx);
	return (1);
}

int	ft_valid(int argc)
{
	if (argc == 2)
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	if (ft_valid(argc))
		ft_startfdf(argv[1]);
	else
		ft_printf("ERROR: invalid parameter\n");
}
