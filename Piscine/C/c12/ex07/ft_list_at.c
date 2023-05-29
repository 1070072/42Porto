/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:56:43 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/29 15:03:50 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*node;
	int i;

	i = 0;
	node = begin_list;
	if (nbr < 0)
		return (0);
	while(i <= nbr)
	{
		node = begin_list->next; 	
		i++;
	}
	return (node);
}


