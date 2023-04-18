/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:53:20 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/18 19:00:13 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t				i;
	unsigned char const	*str;

	str = (unsigned char const *)b;
	i = 0;
	while (i < len)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char *s1;

	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s |", (char *)ft_memchr(tab, -1, 7));
	printf("%s\n", (char *)memchr(tab, -1, 7));
	s1 = ft_memchr("Ola 42", 'l', 2);
	printf("%s |", s1);
	s1 = memchr("Ola 42", 'l', 2);
	printf("%s\n", s1);
	s1 = ft_memchr("Ola 42", 'a', 2);
	printf("%s |", s1); 
	s1 = memchr("Ola 42", 'a', 2);
	printf("%s\n", s1); 
} */