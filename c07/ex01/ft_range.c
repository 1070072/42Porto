/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:33:44 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/26 11:33:39 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int size;
	int *array;
	int i;

	i = 0;
	if (min >= max)
	return (NULL);
	size = max - min;
	array = malloc(4 * size);
	if (array != NULL)
		while (i < size)
		{
			array[i] = min + i;
			i++;
		}
	else
		return (NULL);
	return (array);
}

int	main(void)
{
	int max;
	int min;
	int i;
	int *array;

	i = -1;
	min = -10; 
	max = 10;
	array = ft_range(min, max);
	while (++i < 20)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
