/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:40:05 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/21 18:43:38 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	LIBRARY: <string.h>
**	DESCRIPTION: The memmove() function copies n 
**	bytes from string src to string dest. The two strings may overlap;
**	the copy is always done in a non-destructive manner.
**	The difference between memmove and memcpy it's that memmove uses a buffer*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (((unsigned char *)dest) == ((unsigned char *)src))
	{
		return (dest);
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
