/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:13:51 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/17 10:03:22 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
/*
int	ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;

	while((str1[i] == str2[i]) && str1['\0'])
	{
		i++;		
	}
	return((unsigned char) str1[i] - (unsigned char) str2[i]);
}*/

void	ft_teste(char **str)
{
	int i;
	i = 0;

	while (str[1][i] != '\0')
	{
		write(1, &str[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	write(1, "\n", 1);
}

int	main(int count, char **value)
{
	int i;
	int j;

	ft_teste(value);
	i = 0;
	while (str[1][i] != '\0')
	{
		write(1, &str[1][i], 1);
		i++;
	}
	
	/*i = 0;
	j = count - 1;
	while (j >= 1)
	{
		while (value[j][i] != '\0')
		{
			write(1, &value[j][i], 1);
			i++;			
		}
		write(1, "\n", 1);
		i = 0;
		write(1, &j, 1);
		j--;
	}*/
	return (0);	
}