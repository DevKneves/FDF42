/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:39:43 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

 #include "minilibx/mlx.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include "mylibft/mylibft.h"

typedef struct s_vars
{
	void	*mlx;
	void	*win;
}	t_vars;
typedef struct s_point
{
	int	x;
	int	y;
	int	z;
	int	color;
}	t_point;
typedef struct s_pointmeta
{
	int	size;
	int	rows;
	int	columns;
	int	length;
	int	originx;
	int	originy;
}	t_pointmeta;
typedef struct s_mapdata
{
	t_point		*points;
	t_pointmeta	meta;
}	t_mapdata;
typedef struct s_delta
{
	double	deltax;
	double	deltay;
	double	deltacolor;
	double	x;
	double	y;
	double	c;
	int		pixels;
}	t_delta;
typedef struct s_trans
{
	int		centerx;
	int		centery;
	float	deltax;
	float	deltay;
	float	rad;
	float	tan;
}	t_trans;
int			ft_valid(int argc);
int			ft_startfdf(char *map);
int			ft_closefdf(int keycode, t_vars *vars);
t_mapdata	ft_drawmap(char *map);
t_mapdata	ft_getpoints(char *map);
char		*ft_getstring(char *map);
t_mapdata	ft_transform(t_mapdata mapdata, float rad1, float rad2);
void		ft_drawpoints(t_mapdata	mapdata, void *mlx, void *win);
int			ft_atoi_hexa(char *str);
t_pointmeta	ft_getmeta(char *str);
void		ft_plotpoints(int *x, int *y, t_mapdata *mapdata, char *str);
void		ft_drawline(t_point point1, t_point point2, void *mlx, void *win);

#endif
