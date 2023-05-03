/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:36:47 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/24 11:40:00 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DESCRIPTION:
**  Deletes and frees the given node and every
**  successor of that node, using the function ’del’ and free(3).
**  Finally, the pointer to the list must be set to NULL.
**  lst: The address of a pointer to a node.
**  del: The address of the function used to delete
**  the content of the node.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	lst = 0;
}
