/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 21:47:47 by jf                #+#    #+#             */
/*   Updated: 2023/03/23 22:11:00 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *argv)
{	
	int i;
	
	i = 0;
	while (argv[i])
		i++;
	return (i);
}

void	ft_cnv_hex(int nbr, int len)
{
	int		n;
	char	hex;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
	n = nbr;
	if (n >= len)
		ft_cnv_hex((n / 16), 16);
	hex = "0123456789abcdef"[n % 16];
	write(1, &hex, 1);
}

int main (int argc, char **argv)
{
	int i;
	int len;
	int nbr;
	
	nbr = 0;
	i = 0;
	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (i < len)
			nbr = nbr * 10 + argv[1][i++] - '0';
		printf("%i\n", nbr);
		//return(0);
		ft_cnv_hex(nbr, len);
	}
	else
	write(1, "\n", 1);
}
