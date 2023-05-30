/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:56:43 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/30 10:20:17 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*node;
	unsigned int	i;

	i = 0;
	node = begin_list;
	while(i < nbr && node != NULL)
	{
		node = node->next; 	
		i++;
	}
	if (i == nbr && node != NULL)
		return (node);
	return (NULL);
}
