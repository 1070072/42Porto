/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:34:46 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/28 17:40:49 by jrocha-v         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_final;
	int		l_strs;
	int		l_total;
	int		i;

	i = -1;
	while (++i < size)
		l_strs = l_strs + ft_strlen(strs[i]);
	l_total = (strlen(sep) * (size - 1)) + l_strs + 1;
	if (size == 0)
		str_final = malloc(1);
	else
	{
		i = -1;
		str_final = malloc(l_total);
		while (++i < size)
		{
			str_final = ft_strcat(str_final, strs[i]);
			if (i < (size - 1))
			str_final = ft_strcat(str_final, sep);
		}
		str_final[ft_strlen(str_final) + 1] = '\0';
	}
	return (str_final);
}

int	main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 3)
	{
		strs[offset] = "abc";
		offset++;
	}
	res_str = ft_strjoin(3, strs, ", ");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}
