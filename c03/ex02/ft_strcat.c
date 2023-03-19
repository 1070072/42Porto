/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:01:33 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/17 12:44:03 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	i++;

	return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int l;
	
	i = 0;
	l = ft_strlen(dest) + 1;
	
	while(src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++; 
	}
	dest[l + i] = '\0';
	return (dest);
}


int	main(void)
{
	//char *str1;
	//char *str2;

	//str1 = calloc(5, sizeof(char));
	//str2 = calloc(4, sizeof(char));
	
	char	str1[] = "Ola ";
	char	str2[] = "42!";

	printf("%s", ft_strcat(str1, str2));
	
	return (0);
}