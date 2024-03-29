/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:38:45 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_mapdata	ft_convert(char *str)
{
	int			x;
	int			y;
	t_mapdata	mapdata;

	mapdata.meta = ft_getmeta(str);
	mapdata.points = (t_point *)malloc((mapdata.meta.size) * sizeof(t_point));
	x = mapdata.meta.originx;
	y = mapdata.meta.originy;
	ft_plotpoints(&x, &y, &mapdata, str);
	mapdata = ft_transform(mapdata, -0.7854, 0.7500);
	return (mapdata);
}

char	*ft_getstring(char *map)
{
	int		fd;
	int		read;
	char	*str;
	char	*str2;

	fd = open(map, O_RDONLY);
	str = 0;
	read = 0;
	str2 = 0;
	while (read == 0)
	{
		str2 = get_next_line(fd);
		if (str2 == 0)
			read = 1;
		else
			str = ft_strjoin(str, str2);
	}
	free(str2);
	close(fd);
	return (str);
}

t_mapdata	ft_getpoints(char *map)
{
	char		*str;
	t_mapdata	mapdata;

	str = ft_getstring(map);
	mapdata = ft_convert(str);
	return (mapdata);
}

t_mapdata	ft_drawmap(char *map)
{
	t_mapdata	mapdata;

	mapdata = ft_getpoints(map);
	return (mapdata);
}
