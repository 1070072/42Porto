/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:53:30 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/22 12:57:05 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <stdlib.h>
** SYNOPSIS: Convert a string into an integer
** DESCRIPTION: converts the initial portion
**		of the string pointed to by str to int
** RETURN VALUE: The converted value or 0 on error.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	r;

	s = 1;
	r = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -s;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - '0';
		str++;
	}
	return (r * s);
}

/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str1[] = "123";
    char str2[] = "-456";
    char str3[] = "    789";
    char str4[] = "    +321";
    char str5[] = "    -654xyz";
    
    int num1 = ft_atoi(str1);
    int num2 = ft_atoi(str2);
    int num3 = ft_atoi(str3);
    int num4 = ft_atoi(str4);
    int num5 = ft_atoi(str5);
    
    printf("String: \"%s\" -> Integer: %d\n", str1, num1);
    printf("String: \"%s\" -> Integer: %d\n", str2, num2);
    printf("String: \"%s\" -> Integer: %d\n", str3, num3);
    printf("String: \"%s\" -> Integer: %d\n", str4, num4);
    printf("String: \"%s\" -> Integer: %d\n", str5, num5);
    
    return 0;
}*/
