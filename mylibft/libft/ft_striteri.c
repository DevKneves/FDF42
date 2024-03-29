/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:34:38 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Applies the function f to each character of the
string passed as argument, and passing its index
as first argument. Each character is passed by
address to f to be modified if necessary
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (i++, s[i])
		f(i, &s[i]);
}
/*
#include <stdio.h>
void mod(unsigned int i, char *c)
{
	*c = (i * 2) + '0';
}
int	main(void)
{
	char str[5] = "abcde";
	ft_striteri(str, mod);
	printf("result = %s\n", str);
}
*/