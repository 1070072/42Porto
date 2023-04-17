/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:01:33 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/17 18:23:11 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cntwrds(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != '\0' && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	*ft_strposi(char const *s, char c, int words)
{
	size_t	i;
	int		j;
	int		*posi;

	i = 0;
	j = -1;
	posi = malloc(sizeof(int) * (words * 2));
	while (s[i])
	{
		posi[++j] = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		posi[++j] = i - 1;
		i++;
	}
	return (posi);
}

static char	**ft_substrings(char const *s, int words, int *posi)
{
	char	**out;
	int		i;
	int		j;
	int		k;
	int		l;

	i = -1;
	j = 0;
	l = -1;
	out = malloc(sizeof(char *) * (words + 1));
	while (++i < words)
	{
		k = -1;
		out[i] = malloc(sizeof(char) * ((posi[j + 1] - posi[j]) + 2));
		while (++k < ((posi[j + 1] - posi[j]) + 1))
			out[i][k] = s[++l];
		out[i][k] = '\0';
		l++;
		j = j + 2;
	}
	out[i] = NULL;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		words;
	int		*posi;

	words = ft_cntwrds(s, c);
	posi = ft_strposi(s, c, words);
	out = ft_substrings(s, words, posi);
	if (!s || !out)
		return (NULL);
	return (out);
}

/* int main()
{
    char *s1 = "Ola 42";
    char c = ' ';
    int i = -1;
    char **out = ft_split(s1, c);

    i = -1;
    while (++i < 2)
        printf("%s\n", out[i]);
} */