/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:48:49 by jf                #+#    #+#             */
/*   Updated: 2023/03/16 19:06:08 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while((s1[i] == s2[i]) && s1[i] != '\0')
	i++;
		
	return (s1[i] - s2[i]);	
}

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;

	str1 = calloc(8, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	
	str1 = "jfghdeg";
	str2 = "abnhfgeud";
	str3 = "jfghdeguf";	
	
	printf("str1-str2 = %i\n", ft_strcmp(str1, str2));
	printf("str2-str3 = %i\n", ft_strcmp(str2, str3));	
	printf("str1-str2 = %i\n", ft_strcmp(str1, str3));
}