/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:36:44 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/14 17:50:57 by jrocha-v         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int 	j;
	
	i = -1;
	j = -1;
	join = malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!join)
		return (NULL);
	while (s1[++i])
		join[++j] = s1[i];
	i = -1;
	while (s2[++i])
		join[++j] = s2[i];
	join[j] = '\0';
	return (join);
}

int main()
{
    char *s1 = "Ola ";
    char *s2 = "42!";
    char *out = ft_strjoin(s1, s2);

	printf("%s\n", out);
}
