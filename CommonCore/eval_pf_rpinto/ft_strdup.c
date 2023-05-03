/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:22:51 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/22 14:26:25 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
** SYNOPSIS: save a copy of a string (with malloc)
** DESCRIPTION: The strdup() function allocates sufficient
** memory for a copy of the string s1, does the copy,
** and returns a pointer to it.  The pointer may
** subsequently be used as an argument to the function free(3).
*/

#include "libft.h"

/*char	*ft_strdup(const char *src)
{
	char	*c;
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	c = (char *)malloc(sizeof(char) * i + 1);
	if (!c)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		c[i] = *src;
		i++;
		src++;
	}
	c[i] = '\0';
	return (c);
}*/
char	*ft_strdup(const char *src)
{
	char	*cpy;

	cpy = ft_calloc(ft_strlen(src) + 1, sizeof(char));
	if (cpy == NULL)
		return (NULL);
	return (ft_memcpy(cpy, src, ft_strlen(src)));
}
