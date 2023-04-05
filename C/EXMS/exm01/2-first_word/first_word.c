/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:28:35 by jf                #+#    #+#             */
/*   Updated: 2023/03/23 19:22:27 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc < 2 || argc > 2)
	write(1, "\n", 1);

	while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
	i++;
	if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
	{	
		while (!((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	else
	write(1, "\n", 1);
}
