/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:33:38 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
returns 16384 if c is a printable character, otherwise returns 0 (chcked)
*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
static void test(int c)
{
  int res = ft_isprint(c);
  int res2 = isprint(c);
  printf("value of ft_isprint: %d\n", res);
  printf("value of isprint: %d\n", res2);
  printf("the actual character is %c\n\n", c);
}
int main(void)
{
  int c;
  c = 30;
  while (c >= 30 && c <= 127)
    test(c++);
}
*/
