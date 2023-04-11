/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:03:05 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/28 11:38:52 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_rp(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * (ft_rp(nb, (power - 1))));
}

int	ft_ps(char *str, char *base, int i)
{
	int	j;
	int	v;

	j = -1;
	v = 0;
	while (base[++j] != '\0')
	{
		if (str[i] == base[j])
		{
			v = j;
			return (1) ;
		}
		else
		v = 0;
	}
	return (v);
}

int	ft_check_base(char *base)
{
	int	i;
	int	k;

	i = -1;
	while (base[++i] != '\0')
	{
		k = 0;
		while (k < i)
		{
			if (base[k] == base[i])
				return (0);
			k++;
		}
	}
	i = -1;
	while (base[++i] != '\0')
	{
		if (base[i] == '\0' || base[i] == '+'
			|| base[i] == '-'
			|| ft_sl(base) <= 1)
			return (0);
		else
			return (1);
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;
	int	l_base;
	int	n;

	i = 0;
	n = 0;
	sign = 1;
	l_base = ft_sl(base);
	if (ft_check_base(base) == 0)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = sign * -1;
	if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		return (0);
	j = -1;
	while (++j < (ft_sl(str) - i))
		n = n + ft_ps(str, base, (ft_sl(str) - 1 - j)) * ft_rp(l_base, j);
	return (n * sign);
}

int	main(void)
{
	printf("%i", ft_atoi_base("    +--11111", "01"));
	return (0);
}