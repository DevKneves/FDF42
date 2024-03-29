/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:33:10 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
replaces first n bytes of s array with '\0' (CHECKED)
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
		str[i++] = '\0';
}
/*
#include <stdio.h>
int	main(void)
{
	char str[5] = "Hello";
	bzero(str, 2);
	printf("after bzero:\n");
	printf("value of str[0] is %c\n", str[0]);
	printf("value of str[1] is %c\n", str[1]);
	printf("value of str[2] is %c\n", str[2]);
	printf("value of str[3] is %c\n", str[3]);
	printf("value of str[4] is %c\n\n", str[4]);
	char str2[5] = "Hello";
	ft_bzero(str2, 2);
	printf("after ft_bzero:\n");
	printf("value of str[0] is %c\n", str[0]);
	printf("value of str[1] is %c\n", str[1]);
	printf("value of str[2] is %c\n", str[2]);
	printf("value of str[3] is %c\n", str[3]);
	printf("value of str[4] is %c\n", str[4]);
}
*/