/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:13:05 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/17 13:02:40 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len - 1)
	{
		while (big[i + j] == little[j] && big[i + j] != '\0')
			j++;
		if (little[j] == '\0' && big[i + j] == '\0')
			return ((char *)big + i);
		else
			return (NULL);
		i++;
		j = 0;
	}
	return (0);
}

/* int	main(void)
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	
	printf("%s\n", ft_strnstr(s1, s2, 9));
	printf("%s\n", strnstr(s1, s2, 9));
	printf("%s\n", ft_strnstr(s1, s2, 3));
	printf("%s\n", strnstr(s1, s2, 3));
}  */