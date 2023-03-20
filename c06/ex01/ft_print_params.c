/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 08:45:08 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/17 09:02:53 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int count, char **value)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < count)
	{
		while (value[j][i] != '\0')
		{
			write(1, &value[j][i], 1);
			i++;			
		}
		write(1, "\n", 1);
		i = 0;
		j++;
	}
	return (0);	
}