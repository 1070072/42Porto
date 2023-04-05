/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:29:55 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/16 14:49:03 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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

char	rush03(int x, int y)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 'A';
	j = 'B';
	k = 'C';
	l = ' ';
	if (x == 1 && y == 1)
	{
		ft_print_line(x, i, j, k);
		return (0) ;
	}
	if (y >= 2)
	{
		ft_print_line(x, i, j, k);
		while (y > 2)
		{
			ft_print_line(x, j, l, j);
			y--;
		}
	}
	ft_print_line(x, i, j, k);

	return (0);
}
