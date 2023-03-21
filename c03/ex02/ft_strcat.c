/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:01:33 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/21 08:31:42 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	l;
	int	i;

	l = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	dest[l + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = calloc (9, sizeof(char));
	strcpy(str1, "ola ");
	str2 = calloc (4, sizeof(char));
	strcpy(str2, "42!");
	printf("%s", ft_strcat(str1, str2));
	printf("\n");
	return (0);
}*/