/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:03:05 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/26 19:17:37 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_pos(char *str, char *base, int i)
{
	int j;
	int v;
	
	j = -1;
	while (base[++j] != '\0')
	{
		if (str[i] == base[j])
			return (j);
		else
			return (-1);
	}
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * (ft_recursive_power(nb, (power - 1))));
}

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);	
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int l_base;
	int l_nbr;
	int nb;
	
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
		sign = sign * -1;
	l_base = ft_strlen(base);
	l_nbr = ft_strlen(str);
	nb = 0;
	i = -1;
	while (++i < l_nbr)
		nb = nb + ft_pos(str, base, (l_nbr - 1 - i)) * ft_recursive_power(l_base, i);
	return (nb * sign);
}

int	main(void)
{
	printf("%i", ft_atoi_base("101111", "01"));
	return (0);
}