/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:00:37 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/10 19:00:41 by jrocha-v         ###   ########.fr       */
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
