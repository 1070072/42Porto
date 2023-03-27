/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:01:10 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/27 13:02:45 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
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
	int	v;

	i = -1;
	while (base[++i] != '\0')
	{
		if (base[i] == '\0' || base[i] == '+'
			|| base[i] == '-' || (ft_ch_db(base, base[i], i)) == 0
			|| ft_sl(base) <= 1)
			return (0);
		else
			v = 1;
	}
	return (v);
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

/*int		main(void)
{
	// base binaria
	printf("Bases binarias, n = 47. \"01\" e \"\\/\"\n");
	ft_putnbr_base(47, "01");
	ft_putchar('\n');
	printf("Esperado: 101111\n");
	ft_putnbr_base(47, "\\/");
	ft_putchar('\n');
	printf("Esperado: /\\////\n");
	// base 10
	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MIN);
	ft_putnbr_base(INT_MIN, "0123456789");
	ft_putchar('\n');
	printf("Esperado: -2147483648\n");
	ft_putnbr_base(INT_MIN, ",.;\\][{}@#");
	ft_putchar('\n');
	printf("Esperado: -;.]}]@\\{]@\n");
	// base 16
	printf("Bases 16, n = -65040. \"0123456789A2CDEF\" e \"jdlskmnMKZxVuzfa\"\n");
	ft_putnbr_base(-650, "0123456789ABCDEF");
	ft_putchar('\n');
	printf("Esperado: -FE10\n");
	ft_putnbr_base(-65040, "jdlskmnMKZxVuzfa");
	ft_putchar('\n');
	printf("Esperado: -afdj\n");
	// base 0 e base 1, nao pode aparecer nada
	printf("Bases 0 e 1, nao deve aparecer nada, n = 256.\n");
	ft_putnbr_base(-29092, "0");
	ft_putnbr_base(-29092, "");
	return (0);
}*/