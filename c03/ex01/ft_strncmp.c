/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:06:46 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/16 14:24:00 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && (s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
	}
	if (i < n)
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	else 
		return (0);	
}

/*
int	main(void)
{
	unsigned int n;
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char s5[] = {'a', 'b', 'c', -10, -20, '\0'};
	char *s6;
	char *s7;
	
	n = 5;
	s1 = calloc(10, sizeof(char));
	s2 = calloc(8, sizeof(char));
	s3 = calloc(10, sizeof(char));
	s4 = calloc(10, sizeof(char));
	s6 = calloc(10, sizeof(char));
	s7 = calloc(1, sizeof(char));
	s1 = "abcdefghi";
	s2 = "abcdefg";
	s3 = "abcdEfghi";
	s4 = "ab0defghi";
	s6 = "abcdefghi";
	s7 = "";
	printf("(s1, s2)= %i\n", ft_strncmp(s1, s2, n));
	printf("(s1, s3)= %i\n", ft_strncmp(s1, s3, n));
	printf("(s1, s4)= %i\n", ft_strncmp(s1, s4, n));
	printf("(s1, s5)= %i\n", ft_strncmp(s1, s5, n));
	printf("(s1, s6)= %i\n", ft_strncmp(s1, s6, n));
	printf("(s1, s7)= %i\n", ft_strncmp(s1, s7, n));
	return(0);
}*/