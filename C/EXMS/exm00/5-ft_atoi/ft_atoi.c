/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:41:46 by jf                #+#    #+#             */
/*   Updated: 2023/03/24 08:26:26 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int s;
	int sign;
	int res;
			
	i = -1;
	s = 0;
	sign = 1;
	res = 0;
	while (str[++i] != '\0')
	{	
		if (str[i] == '-')
		{
			sign = sign * -1;
			s++;
		}
		else if (str[i] == '+')
			s++;
		else
			sign = sign * 1;
	}
	if (s > 1)
		return (0);
	i = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (res * sign);		
}		

int	main(void)
{
	int at = 0;
	char str[] = " d +-1234fdsfsdf";
	
	at = atoi(str);
	printf("%i\n", at);
	at = ft_atoi(str);
	printf("%i\n", at);
}
