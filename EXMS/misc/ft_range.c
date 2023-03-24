/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:25:12 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/24 11:19:50 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *argv)
{
	int i;
	
	i = 0;
	while(argv[i])
		i++;
	return (i);	
}

int     *ft_range(int start, int end)
{
	int i;
	int len;
	int  *array;
	
	i = -1;
	len = end - start;
	if (start >= end)
	return (NULL);
	array = malloc(len * 4);
	while(++i <= len)
		array[i] = start + i;		
	return (array);
}

int	main(int argc, char **argv)
{
	int min;
	int max;
	int l_min;
	int l_max;
	int i;
	int *array;
	char num;
	
	l_max = 0;
	min = 0;
	max = 0;
	if (argc == 3)
	{
		l_min = ft_strlen(argv[1]);
		l_max = ft_strlen(argv[2]);
		i = 0;
		while (i < l_min)
			min = min * 10 + argv[1][i++] - '0';
		printf("%d", min);
		i = 0;
		while (i < l_min)
			max = max * 10 + argv[2][i++] - '0';
		printf("%d", max);
		array = ft_range(max, min);
		i = -1;
		/*while (array[++i] != '\0')
		{
			printf("%d", array[i]);
		}*/
	}
	else
	write(1, "\n", 1);
}
