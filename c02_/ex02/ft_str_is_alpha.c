/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:12:57 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/15 16:12:17 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && 'Z' >= str[i])
			i++;
		else if ('a' <= str[i] && 'z' >= str[i])
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
	
	str1 = "";
	printf("%i\n", ft_str_is_alpha(str1));
	str2 = calloc(11, sizeof(char));
	str2 = "A1jhsad2gd";
	printf("%i\n", ft_str_is_alpha(str2));
	str3 = calloc(11, sizeof(char));
	str3 = "jhs,adgrkdj";
	printf("%i\n", ft_str_is_alpha(str3));	
	str4 = calloc(11, sizeof(char));
	str4 = "Ajhsadfdgd";
	printf("%i\n", ft_str_is_alpha(str4));
}
*/