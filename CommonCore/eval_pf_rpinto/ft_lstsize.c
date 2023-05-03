/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:23:10 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/24 11:24:44 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DESCRIPTION:
**  Counts the number of nodes in a list.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
