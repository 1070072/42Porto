/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:13:56 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/17 10:32:53 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*ptr;

	ptr = malloc(number * size);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, number * size);
	return (ptr);
}

/* int	main(void)
{
	char *s1;
	char *s2;
	
	s1 = ft_calloc(5, sizeof(char));
	strcpy(s1, "ola ");
	s2 = calloc(5, sizeof(char));
	strcpy(s2, "ola ");
} */