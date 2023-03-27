/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:01:10 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/27 18:08:56 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_ch_db(char *base, char b, int pos)
{
	int	k;

	k = 0;
	while (k < pos)
	{
		if (base[k] == b)
			return (0);
		k++;
	}	
	return (1);
}

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
		if (base[i] == "" || base[i] == '+'
			|| base[i] == '-'
			|| ft_sl(base) <= 1)
			return (0);
		else
			return (1);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned char	l;
	unsigned int	n;
	unsigned int	j;

	j = ft_sl(base);
	if (ft_check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar ('-');
		n = -nbr;
	}
	else
	n = nbr;
	if (n >= j)
		ft_putnbr_base((n / j), base);
	l = base[n % j];
	write(1, &l, 1);
}

/*int	main(void)
{
	ft_putnbr_base(0, "0123456789abcdef");
	return (0);
}*/