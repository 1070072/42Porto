/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:50:49 by jf                #+#    #+#             */
/*   Updated: 2023/03/16 22:25:17 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/*
char ft_rotate(char **argv[1][i])
{
	if (('A' <= argv[1][i] && 'Z' >= argv[1][i]) || ('A' <= argv[1][i] && 'Z' >= argv[1][i]))
	{
		argv[1][i] = argv[1][i] + 13 - 25;		
	}
	return(**argv[1][i]);
}*/

int	main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (('a' <= argv[1][i] && 'm' >= argv[1][i]) || ('A' <= argv[1][i] && 'M' >= argv[1][i]))
				argv[1][i] = argv[1][i] + 13;
			else if (('n' <= argv[1][i] && 'z' >= argv[1][i]) || ('N' <= argv[1][i] && 'Z' >= argv[1][i]))
				argv[1][i] = argv[1][i] - 13;
			write(1, &argv[1][i], 1);
			i++;
		}		
	}
	write (1, "\n", 1);
	return (0);
}