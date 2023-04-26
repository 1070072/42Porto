/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:44:12 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/26 09:40:43 by jrocha-v         ###   ########.fr       */
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
		return (ft_pnbase_pf(va_arg(args, int), DECBASE));
	else if (spec == 'u')
		return (ft_pnbase_pf(va_arg(args, unsigned int), DECBASE));
	else if (spec == 'x')
		return (ft_pnbase_pf(va_arg(args, unsigned int), LHEXBASE));
	else if (spec == 'X')
		return (ft_pnbase_pf(va_arg(args, unsigned int), UHEXBASE));
	else if (spec == 'p')
		return (ft_check_p((va_arg(args, unsigned long long))));
	else
		return (ft_putchar_pf(spec));
}

int ft_check_p(unsigned long long pointer)
{
	if (pointer == 0)
		return(ft_putstr_pf("(nil)"));
	else
	write(1, "0x", 2);
	return (ft_putadd_pf(pointer) + 2);		
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

/* int main ()
{
	//char *coucou = "coc";

	//printf("Number [%23.4d]\n", 42);
    //printf("Number [%+*i]\n", 8, -42);
	//printf(" (%d)\n", printf("%%, %c, %s, %d, %i, %u, %X, %x, %p, %p ", 'c', "Coucou", 42, -42, 2147483647, 1658, 1203658, &coucou, coucou));
	int original;
	int test;
	//char *s = NULL;
	//char *p = "YOOOO";
	
	// = printf("o:%% %s %d%i %u%p%c\n", s, 4, 2, 42, p, '!');
	//test = ft_printf("t:%% %s %d%i %u%p%c\n", s, 4, 2, 42, p,'!');
	
	//original = printf("%p ", (void *)-14523);
	original = printf(" %p %p ", 0, 0);
	//original = printf("u^m}\r>aA%p9\n6P%p*(V%x", (void *)2981823885985657916, (void *)-2649293159361375756, 521506785);
	printf("-> %i\n", original);
	//test = ft_printf("%p ", (void *)-14523);
	test = ft_printf(" %p %p ", 0, 0);
	//test = ft_printf("u^m}\r>aA%p9\n6P%p*(V%x", (void *)2981823885985657916, (void *)-2649293159361375756, 521506785);
	printf("-> %i\n", test);
} */
