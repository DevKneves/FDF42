/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 12:27:05 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long nbr, char *base, int *res)
{
	unsigned int	baselen;

	baselen = ft_strlen(base);
	if (nbr >= baselen)
	{
		ft_putnbr_base(nbr / baselen, base, res);
		ft_putnbr_base(nbr % baselen, base, res);
	}
	else
	{
		*res += 1;
		write(1, base + nbr, 1);
	}	
}
