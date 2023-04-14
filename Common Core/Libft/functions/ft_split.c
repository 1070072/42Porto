/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:01:33 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/14 11:40:17 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;
	
	i = 0;
	while(s[i])
		i++;
	return (i);
}

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

static int	*ft_getstrlen(char const *s, char c, int words)
{
	size_t i;
	int 	j;
	int 	*posi; // Position of start and end of each string, consecutively

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

/*char	**ft_split(char const *s, char c)
{
	char	**out;
	
	if (!s)
		return (NULL);
	out = malloc(sizeof(char *) * (ft_cntwrds(s, c) + 1));
	
	return (out);	
}*/

int main()
{
	char *s1 = "Ola 42 ola!";
	char c = ' ';
	int words = ft_cntwrds(s1, c);
	int *posi = ft_getstrlen(s1, c, words);
	int i = -1;

	while (++i < (words * 2))
		printf("%i ", posi[i]);
}