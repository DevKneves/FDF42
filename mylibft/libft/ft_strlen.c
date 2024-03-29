/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:34:52 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
returns length of s
must be size_t not long (if possible)
*/
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s == 0)
		return (0);
	while (s[i])
		i++;
	return (i);
}
/*
#include<stdio.h>
#include<string.h>
int main(void)
{
  char *str = "Hello World!";
  printf("str = %s\n", str);
  printf("strlen(str) = %lu\n", strlen(str));
  printf("ft_strlen(str) = %lu\n", ft_strlen(str));
}
*/
