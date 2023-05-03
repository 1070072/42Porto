/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:32:16 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/24 11:36:27 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DESCRIPTION: 
**  Takes as a parameter a node and frees the memory of
**  the node’s content using the function ’del’ given
**  as a parameter and free the node. The memory of
**  ’next’ must not be freed.
**
**  lst: The note to free
**  del: The adress of the function used to delete the content.
**  Return Value: None
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
