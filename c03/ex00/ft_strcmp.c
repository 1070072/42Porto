/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:43:42 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/20 13:27:20 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0')
	i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	s5[] = {'a', 'b', 'c', -10, -20, '\0'};
	char	*s6;

	s1 = calloc(10, sizeof(char));
	s2 = calloc(8, sizeof(char));
	s3 = calloc(10, sizeof(char));
	s4 = calloc(10, sizeof(char));
	s6 = calloc(1, sizeof(char));
	s1 = "abcdefghi";
	s2 = "abcdefg";
	s3 = "abcdEfghi";
	s4 = "abcdefghi";
	s6 = "";
	printf("(s1, s2)= %i\n", ft_strcmp(s1, s2));
	printf("(s1, s2)= %i\n", strcmp(s1, s2));
	printf("(s1, s3)= %i\n", ft_strcmp(s1, s3));
	printf("(s1, s3)= %i\n", strcmp(s1, s3));
	printf("(s1, s3)= %i\n", ft_strcmp(s1, s4));
	printf("(s1, s4)= %i\n", strcmp(s1, s4));
	printf("(s1, s5)= %i\n", ft_strcmp(s1, s5));
	printf("(s1, s5)= %i\n", strcmp(s1, s5));
	printf("(s1, s6)= %i\n", ft_strcmp(s1, s6));
	printf("(s1, s6)= %i\n", strcmp(s1, s6));
	return(0);
}*/