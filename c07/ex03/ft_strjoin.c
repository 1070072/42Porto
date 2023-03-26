/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:34:46 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/26 12:29:24 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int l;

	i = 0;
	l = ft_strlen(dest);
	while(src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;		
	}
	dest[l] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	//int l_sep;
	int i;
	int j;

	i = 0;
	//l_sep = strlen(sep);
	while(strs[i] != '\0')
	{
		j = 0;
		while(strs[i][j] != '\0')
			j++;
		i++;
	}
	printf("%i", i);
	printf("%i", j);
}

int		main(void)
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