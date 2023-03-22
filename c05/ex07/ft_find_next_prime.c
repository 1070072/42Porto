/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:38:13 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/22 15:48:59 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int j;
	int count;
	
	j = 2;
	count = 0;
	if (nb % 2 == 0)
		return (0);
	while (j <= (nb / j))
	{
		j++;
		if (nb % j == 0)
			count++;
	}
	if (count == 0)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int x;
	int i;
	
	i = nb;
	x = 0;
	if (i <= 2)
		return (2);
	while (x == 0)
	{
		if (ft_is_prime(i) == 1)
			x = i;
		else
		{
			i = i + 1;
			if (ft_is_prime(i) == 1)
				x = i;
		}
	}
	return (x);
}

int	main(void)
{
	time_t time_bef;
	time(&time_bef);

	int ret;

	if ((ret = ft_find_next_prime(0)) != 2) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 0 is 2, got %i", ret);
	else if ((ret = ft_find_next_prime(1)) != 2) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 1 is 2, got %i", ret);
	else if ((ret = ft_find_next_prime(2)) != 2) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 2 is 2, got %i", ret);
	else if ((ret = ft_find_next_prime(8)) != 11) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 8 is 11, got %i", ret);
	else if ((ret = ft_find_next_prime(4)) != 5) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 4 is 5, got %i", ret);
	else if ((ret = ft_find_next_prime(13)) != 13) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 4 is 5, got %i", ret);
	else if ((ret = ft_find_next_prime(5982)) != 5987) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 5982 is 5987, got %i", ret);
	else if ((ret = ft_find_next_prime(2000000000)) != 2000000011) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after 2000000000 is 2000000011, got %i", ret);
	else if ((ret = ft_find_next_prime(INT_MAX - 11)) != INT_MAX) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after INT_MAX - 11 is INT_MAX, got %i", ret);
	else if ((ret = ft_find_next_prime(-50)) != 2) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, prime after -50 is 2, got %i", ret);
	else if ((time_bef = (time(NULL) - time_bef)) > 10) printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bKO, timeout! max time is 10 seconds, took %li", time_bef);
	else
		printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\bOK, time: %li seconds", time_bef);

	time(&time_bef);
	if ((time_bef = (time(NULL) - time_bef)) > 10)
		printf("KO, timeout! max time is 10 seconds, took %li\n", time_bef);
	else
		printf("OK, time: %li seconds\n", time_bef);
	return (0);
}