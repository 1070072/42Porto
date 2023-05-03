/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:19:14 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/22 14:22:37 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** LIBRARY: <stdlib.h>
** DESCRIPTION: calloc() function is used to dynamically allocate
** multiple blocks of memory. calloc needs two arguments.
** The number of blocks(size_t numb) and the size of each block(size_t size).
** Memory allocated by calloc is initialized to zero.
** calloc return NULL when sufficient memory is not available in the heap.
*/

#include "libft.h"

void	*ft_calloc(size_t numb, size_t size)
{
	void	*dest;
	size_t	full;

	full = size * numb;
	dest = malloc(full);
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_bzero(dest, full);
	return (dest);
}
