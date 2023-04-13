/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:01:51 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/13 12:32:04 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		((unsigned char *)dest)[i] = (unsigned char) c;
	return (dest);
}

int	main(void)
{
	char s1[] = "Ola 42 ola!";
	char s2[] = "Ola 42 ola!";
	
	printf("%s | %s\n", ft_memset(s1, '$', 15), memset(s2, '*', 15));
	printf("%s | %s\n", ft_memset(s1, '&', 3), memset(s2, '+', 3));
}
