/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:51:23 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/29 14:20:19 by jrocha-v         ###   ########.fr       */
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	
	if (size <= 0)
		return (0);
	list = ft_create_elem(strs[size - 1]);
	list->next = ft_list_push_strs(size - 1, strs);
	return (list);
}
