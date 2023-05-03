/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:17:42 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/24 10:56:53 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  LIBRARY: <string.h>
**  DESCRIPTION: The memcpy() function copies n bytes from memory area src 
**  to memory area dest.  The memory areas must
**  not overlap.  Use memmove(3) if the memory areas do overlap.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char				*pdest;
	const char			*psrc;

	if (!dst && !src)
		return (0);
	pdest = dst;
	psrc = src;
	while (n--)
		*pdest++ = *psrc++;
	return (dst);
}
