/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:53:20 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/13 13:19:38 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include "libft.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *b, int c, size_t len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (((unsigned char *)b)[i] == c)
			return ((void *)&b[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *s1 = "Ola 42!";
	
	printf("%s | %s\n", ft_memchr(s1, 'l', 2), memchr(s1, 'l', 2));
	printf("%s | %s\n", ft_memchr(s1, 'a', 2), memchr(s1, 'a', 2));
}
