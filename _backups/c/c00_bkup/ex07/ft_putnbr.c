/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 08:53:26 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/13 11:51:51 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int count, int j[])
{
	int	count2;

	count2 = 0;
	while (count2 < count)
	{
		ft_putchar(j[count2] + 48);
		count2++;
	}
}

void	ft_getnumbers(int count, int nb)
{
	int	split;
	int	num;
	int	div2;
	int	div3;
	int	j[10];

	num = nb;
	div2 = 1;
	div3 = 0;
	split = count;
	while (split > 0)
	{
		div2 = num % 10;
		j[split - 1] = div2;
		div3 = num / 10;
		num = div3;
		split--;
	}
	ft_print(count, j);
}

void	ft_count(int nb)
{
	int	count;
	int	div;
	int	n_div;

	count = 0;
	n_div = nb;
	div = 1;
	while (div > 0)
	{
		div = n_div / 10;
		n_div = div;
		count++;
	}
	ft_getnumbers(count, nb);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	ft_count(nb);
}
