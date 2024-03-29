/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmeta.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:38:18 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	getrows(char *str)
{
	int		i;
	int		rows;

	i = -1;
	rows = 0;
	while (i++, str[i])
		if (str[i] == '\n' || str[i] == 0)
			rows++;
	ft_printf("rows = %d\n", rows);
	return (rows);
}

int	getcolumns(char *str)
{
	int	i;
	int	columns;

	i = 0;
	columns = 0;
	while (str[i] && str[i] != '\n')
	{
		if (str[i] != ' ')
		{
			if (i == 0)
				columns++;
			else if (i != 0 && str[i - 1] == ' ')
				columns++;
		}
		i++;
	}
	ft_printf("columns = %d\n", columns);
	return (columns);
}

int	getlength(t_pointmeta meta)
{
	int	length;

	if (meta.columns > meta.rows)
		length = 800 / meta.columns;
	else
		length = 800 / meta.rows;
	if (length < 2)
		length = 2;
	ft_printf("length = %d\n", length);
	return (length);
}

void	getorigin(t_pointmeta	*meta)
{
	int		centerx;
	int		centery;
	double	shapex;
	double	shapey;

	centerx = 1440 / 2;
	centery = 900 / 2;
	shapex = ((meta -> columns - 1) / 2.0) * meta->length;
	shapey = ((meta -> rows - 1) / 2.0) * meta->length;
	meta->originx = meta->originx + (centerx - shapex);
	meta->originy = meta->originy + (centery - shapey);
}

t_pointmeta	ft_getmeta(char *str)
{
	t_pointmeta	meta;

	meta.rows = getrows(str);
	meta.columns = getcolumns(str);
	meta.size = meta.rows * meta.columns;
	meta.length = getlength(meta);
	meta.originx = 0 - meta.length;
	meta.originy = 0;
	getorigin(&meta);
	ft_printf("size = %d\n", meta.size);
	return (meta);
}
