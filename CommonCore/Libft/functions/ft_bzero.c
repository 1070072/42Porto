/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:51:33 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/15 22:10:42 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t	i;
	unsigned char *str;
	
	str = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char s1[] = "Ola 42!";
	char s2[] = "Ola 42!";
	
	ft_bzero(s1, 0);
	bzero(s2, 0);
	printf("%s\n", s1);
	printf("%s\n", s2);
}*/