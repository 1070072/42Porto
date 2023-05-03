/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:58:01 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/18 17:34:39 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function counts how many characters there is in the input string*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Calculating the number of characters in your string\n");
		printf("\nYou have %d characters in your string", ft_strlen(av[1]));
	}
	else
		printf("\n");
	return (0);
}*/
