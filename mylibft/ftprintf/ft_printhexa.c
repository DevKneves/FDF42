/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 12:27:30 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexa(unsigned int i, int *strlen)
{
	if (i >= 4294967295)
		ft_printstr("ffffffff", strlen);
	else
		ft_putnbr_base(i, "0123456789abcdef", strlen);
}
