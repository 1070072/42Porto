/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:45:23 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/12 11:53:57 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function tests for existing characters of the isdigit and isalpha*/

#include "libft.h"

int	ft_isalnum(int x)
{
	if ((x >= 97 && x <= 122) || (x >= 65 && x <= 90) || (x >= 48 && x <= 57))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Checking\n");
		printf("True = 1\nFalse = 0\n");
		printf("Result:\n%d\n", ft_isalnum(*av[1]));
	}
	else
		printf("\n");
}*/
