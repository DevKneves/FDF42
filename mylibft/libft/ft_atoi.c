/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 17:52:36 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	emptyspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

static void	adjustempty(const char *str, size_t *i)
{
	while (emptyspace(str[*i]))
		*i += 1;
}

static void	setsign(const char *str, size_t *i, int *sign)
{
	if (str[*i] == '-')
		*sign = -1;
	if ((str[*i] == '-') || (str[*i] == '+'))
		*i += 1;
}

int	ft_atoi(const char *str)
{
	long	nbr;
	int		sign;
	size_t	i;

	nbr = 0;
	sign = 1;
	i = 0;
	adjustempty(str, &i);
	setsign(str, &i, &sign);
	while (('0' <= str[i]) && (str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		if (nbr > 2147483647 && sign == 1)
			return (-1);
		if (nbr > 2147483648 && sign == -1)
			return (0);
		i++;
	}
	return (sign * nbr);
}
/*
#include <stdio.h>
void test(char *c)
{
	printf("atoi result for %s = %d\n", c, atoi(c));
	printf("ft_atoi result for %s = %d\n\n", c, ft_atoi(c));
}

int	main(void)
{
	test("99999999999999999999999999");
	test("-99999999999999999999999999");
	test("-123THERE IS A NYANCAT UNDER YOUR BED");
}
*/
