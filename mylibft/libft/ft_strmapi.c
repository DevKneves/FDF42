/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:34:56 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Applies the function ’f’ to each character of the
string ’s’ to create a new string (with malloc(3))
resulting from successive applications of ’f’.
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (str == 0)
		return (str);
	i = -1;
	while (i++, s[i])
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}
/*
char change(unsigned int i, unsigned char c)
{
	return ('x');
}
#include <stdio.h>
int	main(void)
{
	char str[4] = "abcd";
	char *str2 = ft_strmapi(str, change);
	printf("result = %s\n", str2);
}
*/
