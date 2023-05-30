/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:04:43 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/30 13:08:37 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	t_list	*list_ptr;
	
	while(begin_list != NULL)
	{
		list_ptr = begin_list;
		(*f)(list_ptr->data);
		begin_list = begin_list->next;		
	}
}
