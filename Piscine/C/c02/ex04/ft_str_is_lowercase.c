/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:11:11 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/15 16:15:11 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && 'z' >= str[i])
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;	
	char	*str4;
	char	*str5;
	
	str1 = "";
	printf("%i\n", ft_str_is_lowercase(str1));
	str2 = calloc(11, sizeof(char));
	str2 = "A1jhsadhgd";
	printf("%i\n", ft_str_is_lowercase(str2));
	str3 = calloc(11, sizeof(char));
	str3 = "3hs,adgrkdj";
	printf("%i\n", ft_str_is_lowercase(str3));	
	str4 = calloc(11, sizeof(char));
	str4 = "jhsadfdggr";
	printf("%i\n", ft_str_is_lowercase(str4));
	str5 = calloc(11, sizeof(char));
	str5 = "hasHjeurjL";
	printf("%i\n", ft_str_is_lowercase(str5));
}
*/