/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:48:04 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/23 12:55:26 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    DESCRIPTION:
    Allocates (with malloc(3)) and returns a “fresh” link.
    The variables content and content_size of the new link
   are initialized by a copy of the parameters of the function.
  If the parameter content is null, the variable content is initialized to
  NULL and the variable content_size is initialized to 0 even
  if the parameter content_size isn’t.
  
  The variable next is initialized to NULL. If the allocation fails, the
  function returns NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
