/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:27:46 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/12 11:51:37 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This functions tests if there are any alphabetical characters int he string*/

#include "libft.h"

int	ft_isalpha(int x)
{
	if ((x >= 97 && x <= 122) || (x >= 65 && x <= 90))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Checking for characters in your string\n");
		printf("True = 1\nFalse = 0");
		printf("Result:\n%d\n", ft_isalpha(*av[1]));
	}
	else
		printf("\n");
}
*/
