/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:34:59 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
scans s1 and s2 word by word from beginning.
return the difference between s1[i] and s2[i]
scan up to nth element of s1
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str1 = "ABCez";
	char *str2 = "ABCde";
	int n = 5;

	int i = strncmp(str1, str2, n);
	printf("%d\n", i);
	int j = strncmp(str1, str2, n);
	printf("%d\n", j);
}
*/
