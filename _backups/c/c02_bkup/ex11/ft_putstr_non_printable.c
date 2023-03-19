/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:37:11 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/15 16:33:30 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	x;

	i = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && 127 > str[i])
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			if (str[i] < 0)
				x = 256 + str[i];
			else
			{
				x = str[i];
			}
			ft_putchar("0123456789abcdef"[x / 16]);
			ft_putchar("0123456789abcdef"[x % 16]);
		}
		i++;
	}
}

/*
int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
}
*/