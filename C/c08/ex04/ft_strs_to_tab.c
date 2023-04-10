/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jf <jf@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:39:23 by jf                #+#    #+#             */
/*   Updated: 2023/04/10 16:36:03 by jf               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strs_to_tab.h"
#include <stdlib.h>

int		ft_strlen (char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int 	i;

	i = 0;
	dest = malloc(ft_strlen(src) + 1);
	if (dest != NULL)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;	
		}
		dest[i] = '\0';
		return (dest);
	}
	else
		return (NULL);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*st_av;	
	int			i;
	
	i = 0;
	
	st_av = malloc(sizeof(t_stock_str) * (ac + 1));
	if (st_av = NULL)
		return (NULL);
	while (i < ac)
	{
		st_av[i].size = ft_strlen(av[i]);
		st_av[i].str = av[i];
		st_av[i].copy = ft_strdup(av[i]);		
	}
	st_av[i].str = 0;
	return (st_av);
}
