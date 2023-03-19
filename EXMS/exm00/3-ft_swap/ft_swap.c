/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:14:32 by jf                #+#    #+#             */
/*   Updated: 2023/03/16 18:25:52 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int *a;
	int *b;
	
	a = calloc(1, sizeof(int));
	b = calloc(1, sizeof(int));
	
	*a = 10;
	*b = 20;

	printf("a: %d | b: %d\n", *a, *b);
	ft_swap(a ,b);
	printf("a: %d | b: %d\n", *a, *b);
}
