/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:17:10 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/15 15:59:08 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char 	*substr;
		
	i = 0;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == c)
		return ((char *)&str[i]);
	return (0);
}

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen(str);
	if (*str == '\0')
		return (0);
	while (i > 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;
	
	i = 0;
	while(s[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (*s1 && ft_strrchr(set, s1[i]))
		i--;
	str = ft_substr(s1, 0, i + 1);
	return (str);
}

int main()
{
    char *s1 = "-21Ola 22 42";
    char *set = "-123";
    char *out = ft_strtrim(s1, set);

    printf("%s\n", out);
}