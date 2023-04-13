/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:38:09 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/13 14:40:00 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_memcmp(const void *b1, const void *b2, size_t len)
{
	int i;
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

int	main(void)
{
	char *s1 = "Ola 42!";
	char *s2 = "Ola 42!";
	
	printf("%s | %s\n", ft_memchr(s1, 'l', 2), memchr(s1, 'l', 2));
	printf("%s | %s\n", ft_memchr(s1, 'a', 2), memchr(s1, 'a', 2));
}