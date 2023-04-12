/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:24:10 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/12 18:54:11 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	if (*str == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *s1 = "Ola 42!";
	
	printf("%s | %s\n", ft_strchr(s1, 'l'), strchr(s1, 'l'));
	printf("%s | %s\n", ft_strchr(s1, 'a'), strchr(s1, 'a'));
}
