/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:41:13 by fmardila          #+#    #+#             */
/*   Updated: 2023/03/20 18:54:49 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar ('-');
		ft_putchar ('2');
		ft_putnbr (147483648);
	}
	else if (nb < 0)
	{
		ft_putchar ('-');
		ft_putnbr (nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
		ft_putchar (nb + '0');
}

int	main(void)
{
	ft_putnbr (-42);
	printf ("\n");
	ft_putnbr (42);
	printf ("\n");
	ft_putnbr (-147483647);
	printf ("\n");
	ft_putnbr (2147483647);
	printf ("\n");
	ft_putnbr (-2147483648);
	printf ("\n");
	ft_putnbr (0);
	printf ("\n");
	return (0);
}
