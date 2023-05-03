/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:51:37 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/12 10:56:15 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION:
** 		The isascii() function tests for an ASCII character, which is any
**	character between 0 and dec 127 inclusive.
*/

#include "libft.h"

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		printf("Checking for ascii characters\n");
		printf("true = 1\n\nfalse = 0");
		printf("\nresult:\n%d\n", ft_isascii(*av[1]));
	}
	else
		printf("\n");
}*/
