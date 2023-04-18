/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:13:05 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/18 10:26:52 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i] && i < len - 1)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && big[i + j])
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	
	printf("%s\n", ft_strnstr(s1, s2, 9));
	//printf("%d\n", strnstr(s1, s2, 9));
	printf("%s\n", ft_strnstr(s1, s2, 3));
	//printf("%d\n", strnstr(s1, s2, 3));
}*/