/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 08:47:01 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/13 11:40:46 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_split(int i1, int i2, int k[])
{
	if (i1 >= 10)
	{
		k[0] = i1 / 10;
		k[1] = i1 - k[0] * 10;
	}
	else
	{
		k[0] = 0;
		k[1] = i1;
	}
	if (i2 >= 10)
	{
		k[2] = i2 / 10;
		k[3] = i2 - k[2] * 10;
	}
	else
	{
		k[2] = 0;
		k[3] = i2;
	}
}

void	ft_print(int i1, int i2)
{
	int	k[4];

	ft_split(i1, i2, k);
	ft_putchar(k[0] + 48);
	ft_putchar(k[1] + 48);
	ft_putchar(' ');
	ft_putchar(k[2] + 48);
	ft_putchar(k[3] + 48);
	if (i1 == 98 && i2 == 99)
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (i1 <= 98)
	{
		i2 = i1 + 1;
		while (i2 <= 99)
		{
			ft_print(i1, i2);
			i2++;
		}
		i1++;
	}
}
