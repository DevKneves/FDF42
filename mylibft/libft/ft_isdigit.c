/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:33:35 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
returns 2048 if c represents characters 0 to 9, otherwise returns 0 (checked)
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int main(void)
{
  int c = '0';
  while (c >= '0' && c <= 'A')
  {
    int res = ft_isdigit(c);
    int res2 = isdigit(c);
    printf("value of ft_isdigit: %d\n", res);
    printf("value of isdigit: %d\n", res2);
    printf("the actual character is %c\n\n", c);
    c++;
  }
}
*/
