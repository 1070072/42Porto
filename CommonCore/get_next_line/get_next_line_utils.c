/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:31:23 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/28 10:35:10 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr_gnl(const char *str, int c)
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

char	*ft_strjoin_gnl(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	join = malloc(sizeof(char) * (ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1));
	if (!join)
		return (NULL);
	while (s1[++i])
		join[i] = s1[i];
	while (s2[++j])
		join[j + i] = s2[j];
	join[i + j] = '\0';
	return (join);
}
