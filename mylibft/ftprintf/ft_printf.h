/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:53:29 by kneves            #+#    #+#             */
/*   Updated: 2024/03/27 12:28:13 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
void	ft_printchar(int i, int *strlen);
void	ft_printint(long i, int *strlen);
void	ft_printstr(char *str, int *strlen);
void	ft_printptr(unsigned long ptr, int *strlen);
void	ft_printunsint(long i, int *strlen);
//int		ft_strlen2(char *str);
void	ft_putnbr_base(unsigned long nbr, char *base, int *res);
void	ft_printhexa(unsigned int i, int *strlen);
void	ft_printbighexa(unsigned int i, int *strlen);
int		ft_partof(char c, char *str);
void	ft_printspec(char c, va_list arg, int *strlen);

#endif
