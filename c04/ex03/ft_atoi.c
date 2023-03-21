/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:10:59 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/21 11:24:59 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int	ft_atoi(char *str)
{
	int i;
	int x;
	int ret;
	
	i = 0;
	x = 1;
	ret = 0;
	while (str[i] != '\0')
	{
		if (str[++i] == '-')
			x = x * -1;
		else if (str[++i] == '+')
			x = x * 1;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				ret = (ret * 10) + str[i] - 48;
				i++;		
			}
			return (ret * x);
		}
		else
			i++;
	}
	return (ret);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i", ft_atoi(argv[1]));
}