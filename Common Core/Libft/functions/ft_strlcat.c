/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:35:00 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/12 15:51:03 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ldest;
	size_t	lsrc;

	ldest = ft_strlen(dest);
	if (size <= ldest)
		return (lsrc + size);
	while (src[i] && ((ldest + i) < (size - 1)))
	{
		dest[ldest + i] = src[i];
		i++;
	}
	dest[ldest + i] = '\0';
	return (ldest + lsrc);	
}
