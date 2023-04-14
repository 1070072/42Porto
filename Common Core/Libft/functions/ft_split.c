/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:01:33 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/14 12:00:55 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Delete funtion for final version
size_t	ft_strlen(const char *s)
{
	size_t	i;
	
	i = 0;
	while(s[i])
		i++;
	return (i);
}
///////////////////////

static int	ft_cntwrds(char const *s, char c)
{
	int i;
	int words;

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
	size_t i;
	int 	j;
	int 	*posi; // Position of start and end of each string {s, e, s, e, ....}

	i = 0;
	j = -1;
	posi = malloc(sizeof(int) * (words * 2));
	while (i < ft_strlen(s))
	{
		posi[++j] = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		posi[++j] = i - 1;
		i++;		
	}
	return (posi);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int 	i;
	int 	j;
	int 	k;
	int 	words;
	int		*posi;
	
	i = 0;
	j = 0;
	words = ft_cntwrds(s, c);
	posi = ft_strposi(s, c, words);
	if (!s)
		return (NULL);
	out = malloc(sizeof(char *) * (words + 1));
	while (i < words)
	{
		k = -1;
		out[i] = malloc(sizeof(char) * ((posi[j + 1] - posi[j]) + 2));
		while (++k < ((posi[j + 1] - posi[j]) + 1))
			out[i][k] = s[j + k];
		
		j = j + 2;
	}
	return (out);	
}

int main()
{
	char *s1 = "Ola 42 ola!";
	char c = ' ';
	int words = ft_cntwrds(s1, c);
	int *posi = ft_strposi(s1, c, words);
	int i = -1;

	while (++i < (words * 2))
		printf("%i ", posi[i]);

	
}