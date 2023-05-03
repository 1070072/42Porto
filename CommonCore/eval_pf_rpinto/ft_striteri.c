/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:52:17 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/22 16:01:41 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: Applies the function f to each character of the string passed
** as argument, and passing its index as first argument. Each
** character is passed by address to f to be modified if necessary
Param. #1: The string to iterate.
Param. #2: The function to apply to each character of s and its index.
Return value: None */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
