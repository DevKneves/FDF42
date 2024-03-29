/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 12:27:41 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		strlen;
	va_list	arg;
	char	c;

	strlen = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str != '%')
			ft_printchar(*str, &strlen);
		else
		{
			c = *(str + 1);
			if (ft_partof(c, "csp%diuxX"))
				ft_printspec(c, arg, &strlen);
			str++;
		}
		str++;
	}
	va_end(arg);
	return (strlen);
}