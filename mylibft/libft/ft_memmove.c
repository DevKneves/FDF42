/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:34:07 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst2;
	unsigned char		*src2;

	if (dst == src || len == 0)
		return (dst);
	else if (dst < src)
	{
		dst2 = (unsigned char *)dst;
		src2 = (unsigned char *)src;
		while (len--)
			*dst2++ = *src2++;
	}
	else if (dst > src)
	{
		dst2 = (unsigned char *)dst + (len - 1);
		src2 = (unsigned char *)src + (len - 1);
		while (len--)
			*dst2-- = *src2--;
	}
	return (dst);
}
/*
#include <stdio.h>
int main () {
   char dest[] = "abcde";
   const char src[]  = "1234567";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 5);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/
