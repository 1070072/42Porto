/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:02:20 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/20 13:36:49 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				l;
	unsigned int	i;

	i = 0;
	l = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char			*str1;
	char			*str2;
	unsigned int	n;

	n = 1;
	str1 = calloc (9, sizeof(char));
	strcpy(str1, "ola ");
	str2 = calloc (4, sizeof(char));
	strcpy(str2, "42!");
	printf("%s", ft_strncat(str1, str2, n));
	printf("\n");
	return (0);
}*/