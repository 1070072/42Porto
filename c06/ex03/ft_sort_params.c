/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:13:51 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/22 19:15:28 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while((str1[i] == str2[i]) && str1['\0'])
	{
		i++;		
	}
	return((unsigned char) str1[i] - (unsigned char) str2[i]);
}

int	main(int count, char **value)
{
	int i;
	int j;

	i = 0;
	if (count == 1)
		return (0);
	else 
	{
		while (count > 1)
		{
			

			
		}
	}
}