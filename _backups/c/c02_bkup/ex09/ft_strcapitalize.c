/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:41:06 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/15 20:26:53 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_isnumeric(char c)
{
	if ('1' <= c && '9' >= c)
		return (1);
	else
		return (0);
}

int	ft_isalpha(char c)
{
	if ('A' <= c && 'Z' >= c)
		return (1);
	else if ('a' <= c && 'z' >= c)
		return (1);
	else
		return (0);
}

int	ft_islower(char c)
{
	if ('a' <= c && 'z' >= c)
		return (1);
	else
		return (0);
}

int	ft_isupper(char c)
{
	if ('A' <= c && 'Z' >= c)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isupper(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isnumeric(str[i - 1]) && ft_islower(str[i]))
			i++;
		if ((ft_isalpha(str[i - 1]) == 0) && ft_islower(str[i]))
		{
			str[i] = str [i] - 32;
			i++;
		}
		else
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char str1[] = "hello 42pisciner!";
	char str2[] = "HELLO 42PISCINER!";
	char str3[] = "he+ll|o 4a2pisciNer!a";
	char str4[] = "HEL+LO*a2PISCINER !";
	char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
	char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";

	printf("str1: %s\n", str1);
	ft_strcapitalize(str1);
	printf("str1_c: %s\n", str1);
	printf("str2: %s\n", str2);
	ft_strcapitalize(str2);
	printf("str2_c: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strcapitalize(str3);
	printf("str3_c: %s\n", str3);
	printf("str4: %s\n", str4);
	ft_strcapitalize(str4);
	printf("str4_c: %s\n", str4);
	printf("str5: %s\n", str5);
	ft_strcapitalize(str5);
	printf("str5_c: %s\n", str5);
	printf("str6: %s\n", str6);
	ft_strcapitalize(str6);
	printf("str6_c: %s\n", str6);
	return (0);
}
*/