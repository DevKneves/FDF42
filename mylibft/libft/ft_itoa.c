/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:33:41 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
converts n into string. n can also be negative (Chcked)
*/
#include "libft.h"

static long int	getabs(long int nbr)
{
	if (nbr < 0)
		return (nbr * -1);
	else
		return (nbr);
}

static int	getlen(long int nbr)
{
	int		len;

	if (nbr <= 0)
		len = 1;
	else
		len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = getlen(n);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (c == NULL)
		return (0);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + getabs(n % 10);
		n = getabs(n / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}
