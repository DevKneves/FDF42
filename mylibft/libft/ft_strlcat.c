/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:34:45 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//adds src to end of dst.
//size is the size of the combined string. 
//size must not exceed the allocated memory for dst
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	char	*s;
	int		n;
	int		dlen;

	d = (char *)dst;
	s = (char *)src;
	n = dstsize;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
/*
#include <stdio.h>
int     main(void)
{
char str[7] = "Hel";
char str2[3] = "Wor";
ft_strlcat(str, str2, 7);
printf("%s\n", str);
}
*/
