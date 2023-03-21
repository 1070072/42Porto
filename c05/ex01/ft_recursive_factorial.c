/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:35:55 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/21 19:10:17 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int f;

	if (nb <= 0)
	return (0);

	while (nb > 0)
	{
		f = f * nb;
		ft_recursive_factorial(f);	
	}
	return(f);
}