/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:36:22 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
test with 'gcc main.c *.a'
remember to create 'text' first.
*/
#include "mylibft.h"

int	main(void)
{
	int		fd;
	int		read;
	char	*line;
	char	*str;

	fd = open("text", O_RDONLY);
	read = 0;
	line = 0;
	str = 0;
	while (read == 0)
	{
		line = get_next_line(fd);
		if (!line)
			read = 1;
		else
			str = ft_strjoin(str, line);
	}
	ft_printf("%s", str);
	free(line);
	free(str);
}
