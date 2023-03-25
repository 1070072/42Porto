/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:47:18 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/24 13:04:36 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int c;
	int sign;
	int nb;
		
	i = -1;
	c = 0;
	nb = 0;
	sign = 1;
	while (str[++i] != '\0')
	{
		if (str[i] = '-')
		{
			sign = sign * -1;
			c++;
		}
		if (str[i] = '+')
			c++;
		if (c > 1)
			return (0);
	}
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i++] - '0';
	return (nb * sign);
}

int main(int argc, char **argv)
{
	int n;

	n = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		printf("%i\n", n);
		printf("%d\n", atoi("1234"));
	}
}