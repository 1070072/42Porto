/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:33:35 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/23 14:50:19 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);	
}

int	ft_strlen(char *src)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);	
}

char	*ft_strdup(char *src)
{
	char *tmp;

	tmp = malloc(ft_strlen(src) + 1);
	if (tmp != NULL)
	{
		ft_strcpy(tmp, src);
		return (tmp);
	}
	else
	return(NULL);
}

int	main(void)
{
	//char *str;
	
	char str[] = "Ola 42!";

	printf("original:%s\ncopia:%s\n", str, ft_strdup(str));	
	return (0);
}
