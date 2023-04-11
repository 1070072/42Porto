/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:55:05 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/13 11:40:42 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_last_num(char n1, char n2, char n3)
{
	if (n1 == '7' && n2 == '8' && n3 == '9')
	{
		return ;
	}
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0' - 1;
	n2 = '0';
	n3 = '1';
	while (++n1 <= '7')
	{
		while (++n2 <= '8')
		{
			while (++n3 <= '9')
			{
				write(1, &n1, 1);
				write(1, &n2, 1);
				write(1, &n3, 1);
				ft_last_num(n1, n2, n3);
			}
			n3 = n2 + 1;
		}
		n2 = n1 + 1;
		n3 = n2 + 1;
	}
}
