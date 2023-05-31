/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:55:02 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/31 10:20:24 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct		s_list 
{
	struct s_list	*next;
	void			*data;	
}					t_list;

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());

#endif