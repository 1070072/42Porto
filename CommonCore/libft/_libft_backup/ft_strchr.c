/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:24:10 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/19 11:39:13 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char) c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	return (0);
}

/* int	main(void)
{
	char *s1 = "teste";

	printf("%p | %p\n", ft_strchr(s1, '\0'), strchr(s1, '\0'));
	printf("%s | %s\n", ft_strchr(s1, 'e' + 256), strchr(s1, 'e' + 256));
} */