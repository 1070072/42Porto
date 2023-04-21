/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:44:12 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/21 21:59:17 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(char spec, va_list args)
{
	if (spec == '%')
		return (ft_putchar_pf('%'));
	else if (spec == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	else if (spec == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_pnbase_pf(va_arg(args, int), "0123456789"));
	else if (spec == 'u')
		return (ft_pnbase_pf(va_arg(args, unsigned int), "0123456789"));
	else if (spec == 'x')
		return (ft_pnbase_pf(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (spec == 'X')
		return (ft_pnbase_pf(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (spec == 'p')
		return (ft_putaddress(va_arg(args, unsigned long int)));
	else
		return (ft_putchar_pf(spec));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	count;
	size_t	i;

	count = 0;
	i = -1;
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%')
			count += ft_specifier(str[++i], args);
		else
			count += ft_putchar_pf(str[i]);
	}
	va_end(args);
	return (count);
}
