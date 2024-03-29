/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transform.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:37:46 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	getcenter(t_mapdata mapdata, int *centerX, int *centerY)
{
	int	halfx;
	int	halfy;

	halfx = (mapdata.points[mapdata.meta.size - 1].x - mapdata.points[0].x) / 2;
	halfy = (mapdata.points[mapdata.meta.size - 1].y - mapdata.points[0].y) / 2;
	*centerX = mapdata.points[0].x + halfx;
	*centerY = mapdata.points[0].y + halfy;
}

double	getrad(float deltaX, float deltaY)
{
	double	rad;

	if (deltaY == 0 && deltaX >= 0)
		rad = 0;
	else if (deltaY > 0 && deltaX > 0)
		rad = atan(deltaY / deltaX);
	else if (deltaY > 0 && deltaX == 0)
		rad = 1.5708;
	else if (deltaY > 0 && deltaX < 0)
		rad = 3.1415 + atan(deltaY / deltaX);
	else if (deltaY == 0 && deltaX < 0)
		rad = 3.1415;
	else if (deltaY < 0 && deltaX < 0)
		rad = 3.1415 + atan(deltaY / deltaX);
	else if (deltaY < 0 && deltaX == 0)
		rad = 4.7124;
	else if (deltaY < 0 && deltaX > 0)
		rad = 6.2832 + atan(deltaY / deltaX);
	return (rad);
}

t_mapdata	ft_transform(t_mapdata mapdata, float rad1, float rad2)
{
	t_mapdata	mp;
	t_trans		tr;
	int			i;

	mp = mapdata;
	getcenter(mp, &tr.centerx, &tr.centery);
	i = -1;
	while (i++, i < mp.meta.size)
	{
		tr.deltax = mp.points[i].x - tr.centerx;
		tr.deltay = (mp.points[i].y - tr.centery) * -1;
		tr.tan = sqrt((tr.deltax * tr.deltax) + (tr.deltay * tr.deltay));
		tr.rad = getrad(tr.deltax, tr.deltay) + rad1;
		tr.deltax = tr.tan * cos(tr.rad);
		tr.deltay = tr.tan * sin(tr.rad);
		mp.points[i].x = tr.deltax + tr.centerx;
		mp.points[i].y = tr.centery - (tr.deltay * cos(rad2));
		mp.points[i].y -= (mp.points[i].z * sin(rad2) * mp.meta.length / 8);
	}
	return (mp);
}
