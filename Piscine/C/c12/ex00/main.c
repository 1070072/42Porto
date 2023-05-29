/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:27:12 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/29 10:49:26 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_print_list(t_list *list)
{
    while (list != NULL)
    {
        printf("%s->", list->data);
        printf("%p /\n", list->next);
        list = list->next;
    }
    printf("NULL\n");    
}

int    main(void)
{
    t_list     *list;
    char    *text1 = "Hello 42!";
     
    list = ft_create_elem(text1);
    ft_print_list(list);
	free(list);
}
