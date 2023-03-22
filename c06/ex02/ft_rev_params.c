/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:03:12 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/22 16:52:49 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int count, char **value)
{
	int	i;
	int	j;

	i = 0;
	j = count - 1;
	while (j >= 1)
	{
		while (value[j][i] != '\0')
		{
			write(1, &value[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		write(1, &j, 1);
		j--;
	}
	return (0);
}
