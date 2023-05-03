/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:19:53 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/24 11:21:12 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Description: 
**  Adds the 'new' element at the beginning of the list.
**  Param. #1 The address of a pointer to the first link of a list.
**  Param. #2 The link to add at the beginning of the list.
*/

#include "libft.h"

t_list	ft_lstadd_front(t_list **head, t_list *new)
{
	new->next = *head;
	*head = new;
	return (*new);
}
