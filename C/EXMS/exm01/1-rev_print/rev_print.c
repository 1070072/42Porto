/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:54:02 by jf                #+#    #+#             */
/*   Updated: 2023/03/16 21:07:06 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_rev_print(char *str)
{
	int l;
	int i;
	char temp;
		
	l = 0;
	i = 0;
	
	while (str[l] != '\0')
	l++;
	
	while (l > i)
	{
		temp = str[i];
		str[i] = str[l - 1];
		str[l - 1] = temp;
		i++;
		l--;	
	}
	
	l = 0;
	while(str[l] != '\0')
	{
		write(1, &str[l], 1);
		l++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	
	//char str[] = "Ola 42 pisiners!";
	if (argc ==2)
	ft_rev_print(argv[1]);
	
	write(1, "\n",1);
	return (0);	
}