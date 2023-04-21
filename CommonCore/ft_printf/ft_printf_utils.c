/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:32:00 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/21 20:25:01 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_putnbrb_pf(long long nbr, char *base)
{
	long	n;
	int		length;
	int		count;

	count = 0;
	length = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		n = n * -1;
		count += ft_putchar_pf('-');
	}
	if (n < length)
		count += ft_putchar_pf(base[n]);
	if (n >= length)
	{
		count += ft_putnbrb_pf((n / length), base);
		count += ft_putnbrb_pf((n % length), base);
	}
	return (count);
}
