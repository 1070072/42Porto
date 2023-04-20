/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:32:00 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/20 18:25:38 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putchar_pf(char c)
{
	return(write(1, &c, 1));
}

int	ft_putstr_pf(char *s)
{
	return(write(1, s, ft_strlen(s)));
}

int	ft_specifier(char spec, va_list args)
{
	if (spec == '%')
		return (ft_putchar_pf('%'));
	else if (spec == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	else if (spec == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	else
		return (ft_putchar_pf(spec));
}
