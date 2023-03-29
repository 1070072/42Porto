/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:34:46 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/29 17:41:11 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		i = 0;
	else
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src, int *k)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[*k] = src[i];
		i++;
		(*k)++;
	}
	return (dest);
}

int	ft_size_final(char **strs, char *sep, int size)
{
	int	i;
	int	l_strs;
	int	total;

	i = -1;
	l_strs = 0;
	total = 0;
	while (++i < size)
		l_strs = l_strs + ft_strlen(strs[i]);
	total = (ft_strlen(sep) * (size - 1)) + l_strs + 1;
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_final;
	int		l_total;
	int		i;
	int		k;

	k = 0;
	l_total = ft_size_final(strs, sep, size);
	if (size == 0)
		return (malloc(sizeof(char)));
	else
	{
		i = -1;
		str_final = malloc(l_total);
		if (str_final == 0)
			return (0);
		while (++i < size)
		{
			str_final = ft_strcat(str_final, strs[i], &k);
			if (i < (size - 1))
			str_final = ft_strcat(str_final, sep, &k);
		}
		str_final[k] = '\0';
	}
	return (str_final);
}

/*int	main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(10 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 10)
	{
		strs[offset] = "abcgdfgsfg";
		offset++;
	}
	res_str = ft_strjoin(10, strs, ", **45*5649486");
	if (res_str == NULL)
		return (1);
	printf("%s\n", ft_strjoin(10, strs, ",  "));
	free(strs);
	free(res_str);
	return (0);
}*/