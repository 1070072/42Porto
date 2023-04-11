/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:59:26 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/21 08:45:55 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return ((unsigned int) i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l_dest;
	unsigned int	l_src;

	i = 0;
	l_dest = ft_strlen(dest);
	l_src = ft_strlen(src);
	if (size <= l_dest)
		return (l_src + size);
	while (src[i] && ((l_dest + i) < (size - 1)))
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (l_dest + l_src);
}

/*int	main()
{
	int r;
	
	char str[] = ", pisciners!";
	char dest[] = "Ola 42";
	r = ft_strlcat(dest, str, 7);
	printf("%s\n", dest);
	printf("return: %d\n", r);
}*/