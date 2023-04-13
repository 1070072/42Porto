/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:30:38 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/13 09:44:31 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_atoi(const char *n)
{
	size_t	i;
	int 	sign;
	int 	nb;
		
	i = 0;
	nb = 0;
	sign = 1;
	i = 0;
	while ((n[i] >= 9 && n[i] <= 13) || n[i] == 32)
		i++;
	if (n[i] == '-' || n[i] == '+')
	{
		if (n[i] == '-') 
			sign = sign * -1;
		i++;
	}
	while (n[i] >= '0' && n[i] <= '9')
		nb = nb * 10 + n[i++] - '0';
	return (nb * sign);
}

int main(void)
{
	printf("%i\n", ft_atoi(" 	 2147483647"));
	printf("%d\n", atoi(" 	 2147483647"));
}