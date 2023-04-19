/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:33:18 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/19 11:38:31 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char) c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	char *s1 = "Ola 42 ola! l";
	
	printf("%s | %s\n", ft_strrchr(s1, 'l'), strrchr(s1, 'l'));
	printf("%s | %s\n", ft_strrchr(s1, 'a'), strrchr(s1, 'a'));

	char *src = "";
	char *d1 = strrchr(src, '\0');
	char *d2 = ft_strrchr(src, '\0');

	printf("%s | %s\n", d1, d2);
} */