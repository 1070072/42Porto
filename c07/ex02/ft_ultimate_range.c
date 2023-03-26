/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:34:27 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/26 11:55:50 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int	*array;
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = malloc(4 * size);
	if (array != NULL)
	{
		while (i < size)
		{
			array[i] = min + i;
			i++;
		}
		*range = array;
		return (i);
	}
	else
		return (-1);
}

int	main(void)
{
	int min;
	int max;
	int size;
	int *r;
	int i;
	
	i = -1;	
	min = -10;
	max = 10;
		
	size = ft_ultimate_range(&r, min, max);	
	printf("Array: ");
	while (++i < max)
	printf("%d ", r[i]);
	printf("\n");
	printf("Size: ");
	printf("%d ", size);
	printf("\n");
}