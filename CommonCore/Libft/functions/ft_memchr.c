/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:53:20 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/15 22:28:10 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t	i;
	unsigned char *str;
	
	str = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		if (((unsigned char *)str)[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char *s1 = "Ola 42!";
	
	printf("%s | %s\n", ft_memchr(s1, 'l', 2), memchr(s1, 'l', 2));
	printf("%s | %s\n", ft_memchr(s1, 'a', 2), memchr(s1, 'a', 2));
} */
