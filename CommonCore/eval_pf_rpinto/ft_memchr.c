/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:39:55 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/22 12:43:10 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
**	DESCRIPTION: The memchr() function scans the initial "n" bytes
**	of the memory area pointed to by "s" for the first instance of "c".
**	Both "c" and the bytes of the memory area
**	pointed to by "s" are interpreted as unsigned char.
** 	The memchr() function locates the first occurrence 
**  of "c" (converted to an unsigned char) in string "s".
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = (void *)s;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
			return (&b[i]);
		i++;
	}
	return (NULL);
}
