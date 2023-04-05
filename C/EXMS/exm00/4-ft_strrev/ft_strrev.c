/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:11:14 by jf                #+#    #+#             */
/*   Updated: 2023/03/16 20:55:58 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int l;
	int i;
	char temp;
	
	l = 0;
	i = 0;
	
	while (str[l] != '\0')
	l++;

	while((l - 1) > i)
	{
		temp = str[i];
		str[i] = str[l - 1];
		str[l - 1] = temp;
		i++;
		l--;		
	}
	return(str);
}

int	main(void)
{
	char str1[] = "Ola como estas?";
	char str2[] = "!!24 exif oduT";

	printf("%s\n", ft_strrev(str1));
	printf("%s\n", ft_strrev(str2));
	return (0);
}