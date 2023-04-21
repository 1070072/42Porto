/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:32:55 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/21 20:01:43 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
//# include <string.h>

size_t	ft_strlen(const char *s);
int		ft_specifier(char specifier, va_list args);
int		ft_putchar_pf(char c);
int		ft_putstr_pf(char *s);
int		ft_putnbrb_pf(long long nbr, char *base);

# endif