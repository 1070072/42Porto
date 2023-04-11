/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:50:31 by jf                #+#    #+#             */
/*   Updated: 2023/03/23 21:23:52 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_doubles(char *str, char c, int pos)
{
	int k;

	k = 0;
	while(k < pos)
	{
		if(str[k] == c)
			return (0);
		k++;
	}	
	return (1);
}

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 3)
	return(write(1, "\n", 1));
	while (argv[1][i] != '\0')
	{
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{	
				if (ft_check_doubles(argv[1], argv[1][i], i) == 1)
				{	
					write(1, &argv[1][i], 1);
					break;
				}				
			}				
			j++;
		}
		i++;
	}
}