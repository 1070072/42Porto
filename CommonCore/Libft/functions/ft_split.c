/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:01:33 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/18 17:53:39 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char	*substr;
	size_t	i;

	i = 0;
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		len = 0;
	substr = malloc(len * sizeof(char) + 1);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
} */
static int	ft_cntwrds(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static char	*ft_strposi(char const *s, char c, int pos)
{
	size_t	i;
	char	*subs;

	i = pos;
	while (s[i] != '\0' && s[i] != c)
		i++;
	subs = ft_substr(s, pos, (i - pos));
	return (subs);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		j;

	i = 0;
	j = -1;
	out = malloc(ft_cntwrds(s, c) * sizeof(char *) + 1);
	if (!out || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			out[++j] = ft_strposi(s, c, i);
			i = i + ft_strlen(out[j]);
		}
	}
	out[++j] = NULL;
	return (out);
}

/* int main()
{
    char *s1 = "lorem ipsum dolor sit amet, \
	 adipiscing elit. Sed non risus. Suspendisse";
    char c = ' ';
    int i = -1;
    char **out = ft_split(s1, c);
	int words = ft_cntwrds(s1, c);

    i = -1;
    while (++i < words)
    printf("%s\n", out[i]);
	
	words = words + 1;
	while (--words >= 0)
		free(out[words]);
	free(out);
	return (0);
} */