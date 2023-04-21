/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:44:12 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/21 20:23:54 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(char spec, va_list args)
{
	unsigned long int	pointer;
	
	if (spec == '%')
		return (ft_putchar_pf('%'));
	else if (spec == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	else if (spec == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_putnbrb_pf(va_arg(args, int), "0123456789"));
	else if (spec == 'u')
		return (ft_putnbrb_pf(va_arg(args, unsigned int), "0123456789"));		
	else if (spec == 'x')
		return (ft_putnbrb_pf(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (spec == 'X')
		return (ft_putnbrb_pf(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (spec == 'p')
	{
		pointer = va_arg(args, long long);
		if (pointer == 0)
			return(ft_putstr_pf("0x0"));
		write(1, "0x", 2);
		return (ft_putnbrb_pf(pointer, "0123456789abcdef") + 2);
	}
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
	while(str[++i])
	{
 		if (str[i] == '%')
			count += ft_specifier(str[++i], args);
		else
		{
			count += ft_putchar_pf(str[i]);
		}
	}
	va_end(args);
	return (count);
}

int main ()
{
	//char *coucou = "coc";

	//printf("Number [%23.4d]\n", 42);
    //printf("Number [%+*i]\n", 8, -42);
	//printf(" (%d)\n", printf("%%, %c, %s, %d, %i, %u, %X, %x, %p, %p ", 'c', "Coucou", 42, -42, 2147483647, 1658, 1203658, &coucou, coucou));
	int original;
	int test;
	char *s = "Ola";
	char *p = "YOOOO";
	
	original = printf("o:%% %s %d%i %u%p%c\n", s, 4, 2, 42, p, '!');
	
	test = ft_printf("t:%% %s %d%i %u%p%c\n", s, 4, 2, 42, p,'!');
	
	printf("Count original: %i\n", original);
	printf("Count test: %i\n", test);
}
