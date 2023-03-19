/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:25:39 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/14 16:27:35 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a / *b;
	temp_b = *a % *b;
	*a = temp_a;
	*b = temp_b;
}

/*
int	main(void)
{
	int *a;
	int *b;

	a = calloc(1, sizeof(int));
	b = calloc(1, sizeof(int));
	*a = 15;
	*b = 2;

	printf("*a: %d, *b: %d\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("*a: %d, *b: %d\n", *a, *b);
	return (0);
}
*/