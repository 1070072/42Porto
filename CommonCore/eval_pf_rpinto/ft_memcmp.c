/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:43:39 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/22 12:51:56 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
** DESCRIPTION:	 The memcmp() function compares byte string s1 
** against byte string s2. Both strings are assumed to be n bytes long.
** RETURN VALUE: an integer less than, equal to, or greater than zero
** if the first n bytes  of  s1  is  found, respectively,
** to be less than, to match, or be greater than the first n bytes of s2.*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;

	i = 0;
	str1 = (unsigned const char *) s1;
	str2 = (unsigned const char *) s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
