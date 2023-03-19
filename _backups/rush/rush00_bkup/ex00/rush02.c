/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:35:14 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/12 17:35:15 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_line(int x, char ve, char vm, char vd)
{
	int	col;

	col = x;
	if (col == 1)
	{
		ft_putchar(ve);
		ft_putchar('\n');
		return ;
	}
	if (col == 2)
	{
		ft_putchar(ve);
		ft_putchar(vd);
		ft_putchar('\n');
		return ;
	}
	ft_putchar(ve);
	while (col > 2)
	{
		ft_putchar(vm);
		col--;
	}
	ft_putchar(vd);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 'A';
	j = 'B';
	k = 'C';
	l = ' ';
	if ((x == 1 && y == 1) || (x >= 1 && y == 1))
	{
		ft_print_line(x, i, j, i);
		return ;
	}
	if (y >= 2)
	{
		ft_print_line(x, i, j, i);
		while (y > 2)
		{
			ft_print_line(x, j, l, j);
			y--;
		}
	}
	ft_print_line(x, k, j, k);
}
