/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:38:09 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/15 22:11:23 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char *str1;
	unsigned char *str2;
	size_t		i;

	i = 0;
	str1 = (unsigned char*)b1;
	str2 = (unsigned char*)b2;
	while (i < len && (str1[i] == str2[i]))
		i++;
	if (i < len)
		return (str1[i] - str2[i]);
	else
		return (0);
}

/* int	main(void)
{
	char *s1 = "Ola 42!";
	char *s2 = "Ola 24!";
	
	printf("%i | %i\n", ft_memcmp(s1, s2, 0), memcmp(s1, s2, 0));
	printf("%i | %i\n", ft_memcmp(s1, s2, 3), memcmp(s1, s2, 3));
	printf("%i | %i\n", ft_memcmp(s1, s2, 6), memcmp(s1, s2, 6));
} */