/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:39:07 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/12 11:52:05 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This functions tests for any existing numbers*/

#include "libft.h"

int	ft_isdigit(int x)
{
	if (x >= 48 && x <= 57)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		printf("Checking\n\n");
		printf("If there are numbers the program will display 1, otherwise 0\n");
		printf("%d\n", ft_isdigit(*av[1]));
	}
	else
		printf("\n");
}*/
