/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:43:26 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/24 11:46:22 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
**  Iterates the list and applies the function
**  ’f’ on the content of each node.
**  Creates a new list resulting of the successive applications of
**  the function ’f’. The ’del’ function is used to
**  delete the content of a node if needed.
**  lst: The address of a pointer to a node.
**  f: The address of the function used to iterate on the list.
**  del: The address of the function used to delete
**  the content of a node (if needed).
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
