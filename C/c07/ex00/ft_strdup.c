/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 09:56:30 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/28 17:56:21 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*temp;

	temp = malloc(ft_strlen(src) + 1);
	if (temp != NULL)
	{
		ft_strcpy(temp, src);
		return (temp);
	}
	else
		return (NULL);
}

/*int	main(void)
{
	char	str1[] = "Ola 42!";

	printf("Original: %s\n", str1);
	printf("Duplicado: %s\n", ft_strdup(str1));
}*/