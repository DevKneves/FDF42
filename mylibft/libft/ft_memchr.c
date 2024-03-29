/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:33:46 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//kinda same as ft_strchr? searching until the nth element of s) (checked)
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	c2;

	s2 = (unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s2 == c2)
		{
			return (s2);
		}
		s2++;
		i++;
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "abcdefg";
   const char ch = 'c';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("String after %c is %s\n", ch, ret);

   return(0);
}
*/
