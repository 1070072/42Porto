/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:33:11 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/13 10:58:28 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;
	unsigned char *dt;
	unsigned char *sr;
	
	dt = (unsigned char *) dest;
	sr = (unsigned char *) src;
	i = -1;
	while (++i < len)
		dt[i] = sr[i];
	return (dt);
}

int	main(void)
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
}