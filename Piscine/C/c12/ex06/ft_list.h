/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:50:43 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/29 14:30:12 by jrocha-v         ###   ########.fr       */
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

void				ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list				*ft_create_elem(void *data);

#endif
