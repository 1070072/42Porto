/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:44:12 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/20 18:26:08 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
			count = count + ft_specifier(str[++i], args);
		else
		{
			ft_putchar_pf(str[i]);
			count++;
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
	
	original = printf("o:%% %s %c%c%c\n", "Ola", '4', '2', '!');
	
	test = ft_printf("t:%% %s %c%c%c\n", "Ola", '4', '2', '!');
	
	printf("Count original: %i\n", original);
	printf("Count test: %i\n", test);
}
