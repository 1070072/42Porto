/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:21:13 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/24 11:28:48 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);	
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while(src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	int i;
	char *dup;
	
	i = 0;
	dup = malloc(ft_strlen(str) + 1);
	ft_strcpy(dup, str);
	return (dup);	
}

int	main(void)
{
	//char *str;
	
	char str[] = "Ola 42!";

	printf("original:%s\ncopia:%s\n", str, ft_strdup(str));	
	return (0);
}