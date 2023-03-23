/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:34:01 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/23 14:29:05 by jrocha-v         ###   ########.fr       */
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
	range = (int*)malloc(size * 4);
	while (++i < size)
		range[i] = min + i;	
	return (range);
}

int	main(void)
{
	int min;
	int max;
	int *r;
	int i;
		
	min = -10;
	max = 10;
	
	r = ft_range(min, max);	
	while (
	printf("%d\n", *r);
}