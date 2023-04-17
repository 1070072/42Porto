/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:33:11 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/17 17:08:52 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if(!dest && !src)
		return (NULL);
	while (++i < len)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}

/* int	main(void)
{
 	int i = -1;
	char s1[] = "Ola 42 ola!";
	int s11[] = {42, 45, 68, 1, 4, 6};
	char s2[10];
	int s22[10];
	ft_memcpy(s22, s11, 16);
	int s222[10];
	memcpy(s222, s11, 16);
	char s3[10];
	printf("%s | %s\n", ft_memcpy(s2, s1, 5), memcpy(s2, s1, 5));
	while (++i < 6)
	printf("%i | %i\n", s22[i], s222[i]);
	printf("%s | %s\n", ft_memcpy(s3, s1, 2), memcpy(s3, s1, 2)); 

	char *s;
	
	s = ft_memcpy(((void *)0), ((void *)0), 3);
	printf("%s\n", s);
	s = memcpy(((void *)0), ((void *)0), 3);
	printf("%s\n", s);
} */