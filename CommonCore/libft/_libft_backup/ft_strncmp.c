/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:47:37 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/17 17:27:22 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && (s1[i] == s2[i]) && s1[i] != '\0')
		i++;
	if (i < size)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}

/* int	main(void)
{
	char *s1 = "Ola 42!";
	char *s2 = "Ola 24!";
	
	printf("%i | %i\n", ft_strncmp(s1, s2, 0), strncmp(s1, s2, 0));
	printf("%i | %i\n", ft_strncmp(s1, s2, 3), strncmp(s1, s2, 3));
	printf("%i | %i\n", ft_strncmp(s1, s2, 6), strncmp(s1, s2, 6));
} */