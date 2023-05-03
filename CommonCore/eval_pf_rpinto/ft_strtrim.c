/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:40:38 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/22 14:47:23 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of ’s1’
** with the characters specified in ’set’ removed from the beginning
** and the end of the string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "  \t   Hello, world!   \n  ";
    char set[] = " \t\n";
    char *trimmed_str = ft_strtrim(str, set);
    
    printf("Original string: \"%s\"\n", str);
    printf("Trimmed string: \"%s\"\n", trimmed_str);
    
    free(trimmed_str);
    return 0;
}*/
