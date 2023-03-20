/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:32:16 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/15 16:19:18 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && 'z' >= str[i])
		{
			str[i] = str[i] - 32 ;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{	
	char	str1[] = "";
	printf("%s\n", ft_strupcase(str1));
	char	str2[] = "A1jhsad2gd";
	printf("%s\n", ft_strupcase(str2));
	char	str3[] = "3hs,adgrkdj";
	printf("%s\n", ft_strupcase(str3));	
	char	str4[] = "AJHEFCUGJD";
	printf("%s\n", ft_strupcase(str4));
	char	str5[] = "1452145794";
	printf("%s\n", ft_strupcase(str5));
}
*/