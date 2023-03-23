/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:34:01 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/23 15:05:45 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int size;
	int	*range;
	int i;
	
	i = -1;
	size = max - min;
	if (min >= max)
	return (NULL);
	range = malloc(size * 4);
	while (++i <= size)
		range[i] = min + i;	
	return (range);
}

int	main(void)
{
	int min;
	int max;
	int *r;
	int i;
	
	i = -1;	
	min = -10;
	max = 10;
		
	r = ft_range(min, max);	
	while (r[++i] < max)
	printf("%d ", r[i]);
	printf("\n");
}