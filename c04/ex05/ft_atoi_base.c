/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:03:05 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/27 10:18:00 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_pos(char *str, char *base, int i)
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
			break ;
		}
		else
		v = -1;
	}
	return (v);
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

int	ft_sl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;
	int	l_base;
	int	nb;

	i = 0;
	nb = 0;
	sign = 1;
	l_base = ft_sl(base);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = sign * -1;
	j = -1;
	while (++j < (ft_sl(str) - i))
		nb = nb + ft_pos(str, base, (ft_sl(str) - 1 - j)) * ft_rp(l_base, j);
	return (nb * sign);
}

/*int	main(void)
{
	printf("%i", ft_atoi_base("    +--28a", "0123456789abcdef"));
	return (0);
}*/