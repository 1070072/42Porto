/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:24:10 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/12 17:36:19 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == (char)c)
			return (str[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *s1 = "Ola 42!";
	int c = 'a';
	
	printf("%d", ft)
	
}