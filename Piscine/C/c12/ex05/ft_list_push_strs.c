/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:51:23 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/29 14:16:19 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;
	
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	int i;
	
	list = NULL;
	i = -1;
	if (size <= 0)
		return (0);
	while (strs[++i])
		ft_list_push_front(&list, strs[i]);
	return (list);
}
