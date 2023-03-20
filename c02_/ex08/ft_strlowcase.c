/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:02:03 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/15 16:20:27 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && 'Z' >= str[i])
		{
			str[i] = str[i] + 32 ;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{	
	char	str1[] = "";
	printf("%s\n", ft_strlowcase(str1));
	char	str2[] = "A1jhsad2gd";
	printf("%s\n", ft_strlowcase(str2));
	char	str3[] = "3hs,adgrkdj";
	printf("%s\n", ft_strlowcase(str3));	
	char	str4[] = "AJHEFCUGJD";
	printf("%s\n", ft_strlowcase(str4));
	char	str5[] = "1452145794";
	printf("%s\n", ft_strlowcase(str5));
}
*/