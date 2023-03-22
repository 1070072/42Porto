/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:35:55 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/22 09:16:57 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int f;
	
	f = 1;
	if (nb >= 0)
	{
		while (nb > 0)
		{	
			nb = nb * ft_recursive_factorial(nb - 1);
		}
	}
	else
	{
		while (nb < 0)
		{
			ft_recursive_factorial(++nb);
			f = (nb + 1) * nb;
		}
	}
	return(f);
}

int	main(void)
{
	int n;
	int res;

	n = -5;
	while (n <= 10)
	{
		res = ft_recursive_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
}