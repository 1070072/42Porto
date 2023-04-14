/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:30:38 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/14 10:42:40 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nstr)
{
	size_t	i;
	int 	sign;
	int 	nb;
		
	nb = 0;
	sign = 1;
	i = 0;
	while ((nstr[i] >= 9 && nstr[i] <= 13) || nstr[i] == 32)
		i++;
	if (nstr[i] == '-' || nstr[i] == '+')
	{
		if (nstr[i] == '-') 
			sign = sign * -1;
		i++;
	}
	while (nstr[i] >= '0' && nstr[i] <= '9')
		nb = nb * 10 + nstr[i++] - '0';
	return (nb * sign);
}

int main(void)
{
	printf("%i\n", ft_atoi(" 	 -2147483648"));
	printf("%d\n", atoi(" 	 -2147483648"));
}