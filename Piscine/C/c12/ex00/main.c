/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:27:12 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/29 12:13:45 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_print_list(t_list *list)
{
	t_list *current = list;
	
    while (current != NULL)
    {
		printf("%p/", current);
        printf("%s -> ", (void *)current->data);
        printf("%p\n", current->next);
        current = current->next;
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
