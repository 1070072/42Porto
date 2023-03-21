/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:19:03 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/21 11:54:26 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *tofind)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (tofind[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == tofind[j] && str[i + j] != '\0')
			j++;
		if (tofind[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*int	main(void)
{
	char 		*str1;
	char 		*str2;
	
	str1 = calloc (8, sizeof(char));
	strcpy(str1, "ola 42!");
	
	str2 = calloc (4, sizeof(char));
	strcpy(str2, "42!");
	
	printf("%s", ft_strstr(str1, str2));
	printf("\n");
	return (0);		
}*/