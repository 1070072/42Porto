/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:30:31 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/24 11:41:20 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);	
}

void	ft_hex(int nbr, int len)
{
	char hex;
	int n;

	n = nbr;
	if (n >= len)
		ft_hex((n / 16), 16);
	hex = "0123456789abcdef"[n % 16];
	write(1, &hex, 1);	
}

int	main(int argc, char **argv)
{
	int i;
	int l;
	int nbr;

	i = 0;
	nbr = 0;
	if (argc == 2)
	{
		l = ft_strlen(argv[1]);
		while (i < l)
			nbr = nbr * 10 + argv[1][i++] - '0';
		ft_hex(nbr, l);
		write(1, "\n", 1);	
	}
}