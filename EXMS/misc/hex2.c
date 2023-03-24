/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 09:24:35 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/24 09:50:45 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

void	ft_hex(int n, int len)
{
	int nb;
	char hex;

	if (n < 0)
	{	write(1, "-", 1);
		nb = -n;
	}
	else
	nb = n;
	if (nb >= len)
		ft_hex((nb / 16), 16);
	hex = "0123456789abcdef"[nb % 16];
	write(1, &hex, 1);
}

int main(int argc, char **argv)
{
	int i;
	int l;
	int n;

	i = 0;
	l = 0;
	n = 0;
	if (argc == 2)
	{
		l = ft_strlen(argv[1]);
		while (i < l)
			n = n * 10 + argv[1][i++] - '0';
		ft_hex(n, l);
		write(1, "\n", 1);
	}
	else
	write(1, "\n", 1);	
}