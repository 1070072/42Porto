/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:13:22 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/24 09:06:24 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int c;
	int sign;
	int res;
	
	i = -1;
	c = 0;
	sign = 1;
	res = 0;
	while (str[++i] != '\0')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
			c++;
		}		 
		if (str[i] == '+')
			c++;
		if (c > 2)
			return (0);		
	}
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (res * sign);
}

int	main(int argc, char **argv)
{
	int nb;

	nb = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		printf("%i", nb);
		printf("\n");
	}
}
