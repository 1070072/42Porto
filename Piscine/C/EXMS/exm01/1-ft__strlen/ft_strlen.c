/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:46:59 by jf                #+#    #+#             */
/*   Updated: 2023/03/16 19:51:48 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	
	while(str[i])
	i++;

	return(i);	
}

int	main(void)
{
	char str1[] = "Ola 42 pisciners!";
	char str2[] = "Boa sorte!";

	printf("%i\n", ft_strlen(str1));
	printf("%i\n", ft_strlen(str2));
	return (0);	
}
