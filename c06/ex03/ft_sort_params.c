/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:13:51 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/25 12:38:42 by jf               ###   ########.fr       */
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

char **ft_argvswap(int argc, char **argv)
{
	int i;
	int j;
	char *temp;
	
	i = 0;
	j = argc;
	while (j < argc - 1)
	{
		i = 0;
		while (i < argc - 1)
		{
			temp = argv[i];
			if (ft_strcmp(argv[i + 1], argv[i]) < 0)
			{
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int count;

	count = argc;
	if (argc == 1)
		return (0);
	else 
	{
		ft_argvswap(argc, argv);
		j = 1;
		i = 0;
		while (j < argc)
		{
			while (argv[j][i] != '\0')
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			j++;
		}
	}
}