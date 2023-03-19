/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verifycomb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:49:59 by jf                #+#    #+#             */
/*   Updated: 2023/03/19 11:34:53 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main()
{
	int count = 1;
	int i = -1;
	int board[] = {3, 2, 1, 4};

	while (++i <= 4)
	{
		if (board[i] == 4)
			break;
		else if (board[i] < board[i + 1])
			count++;
	}
	printf("%i", count);
}
