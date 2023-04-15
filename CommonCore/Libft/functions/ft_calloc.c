/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:13:56 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/15 22:11:01 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void *ptr;
	if (number == 0 || size == 0)
		return (0);	
	ptr = malloc(number * size);
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