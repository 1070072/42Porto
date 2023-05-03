/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:44:30 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/12 11:49:36 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isprint() function tests for any printing character, including space*/

#include "libft.h"

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		printf("Checking for printable characters\n");
		printf("true = 1\nFalse = 0\n");
		printf("Result:\n%d\n", ft_isprint(*av[1]));
	}
	else
		printf("\n");
}*/
