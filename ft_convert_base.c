/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:09:40 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/28 15:25:06 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sl(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
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

int	ft_pos(char *str, char *base, int i)
{
	int j;
	int v;
	
	j = -1;
	v = 0;
	while (base[++j] != '\0')
	{
		if (str[i] == base[j])
		{
			v = j;
			break;
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

char *ft_convert(int nb, char *base, char *l_out)
{
	unsigned int			n;
	unsigned int			j;
	static unsigned int		k;

	j = ft_sl(base);
	if (nb < 0)
	{
		k = 0;
		n = -nb;
		l_out[0] = '-';
	}
	else
		n = nb;
	if (n >= j)
		ft_convert((n / j), base, l_out);
	if (l_out[0] == '-' && k <= 0)
		k = 0;
	l_out[++k] = base[n % j];
	l_out[k + 1] = '\0';
	return (l_out);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*l_out;
	int 	i;
	int 	j;
	int 	sign;
	int 	n_conv1;

	i = 0;
	sign = 1;
	l_out = malloc(40);
	if (ft_check_base(base_from) == 0 || ft_check_base(base_to) == 0)
		return (NULL);
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	while (nbr[i] == '+' || nbr [i] == '-')
		if (nbr[i++] == '-')
			sign = sign * -1;
	j = -1;
	while (++j < (ft_sl(nbr) - i))
		n_conv1 = n_conv1 + ft_pos(nbr, base_from, (ft_sl(nbr) - 1 - j)) * ft_rp(ft_sl(base_from), j);
	n_conv1 = sign * n_conv1;
	return (ft_convert(n_conv1, base_to, l_out));
}

/*int	main(void)
{
	printf("%s", ft_convert_base("    +--28a", "0123456789abcdef", "0123456789"));
	return (0);
}*/

int		main(void)
{
	char nbr[] = "-+--650";
	char base_to[] = "0123456789ABCDEF";
	char base_from[] = "0123456789";
	char *res;

	res = ft_convert_base(nbr, base_from, base_to);
	if (res == NULL)
		return (1);
	printf("%s\n", res);
	free(res);
	return (0);
}