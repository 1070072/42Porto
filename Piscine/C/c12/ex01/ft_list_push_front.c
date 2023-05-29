/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:04:26 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/29 11:56:52 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;		

	return (elem);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*front;

	if (*begin_list)
	{
		front = ft_create_elem(data);
		front->next = *begin_list;
		*begin_list = front;
	}
	else
		*begin_list = ft_create_elem(data);
}
