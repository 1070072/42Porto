/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:56:25 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/29 15:00:57 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef	struct 		s_list
{
	struct	s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_list_at(t_list *begin_list, unsigned int nbr);

#endif
