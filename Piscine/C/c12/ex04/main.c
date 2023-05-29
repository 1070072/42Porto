/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:38:06 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/29 12:38:43 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_print_list(t_list *list)
{
	t_list	*current = list;
	
    while (current != NULL)
    {
		printf("%p/", current);
        printf("%s -> ", (char *)current->data);
        printf("%p\n", current->next);
        current = current->next;
    }
}

int    main(void)
{
    t_list     *linked_list = malloc(sizeof(t_list));
    char    	*text1 = "Hello 42!";
	char		*text2 = "Ola 42";
	char		*text3 = "42";
	char 		*text4 = "I'm last";

	linked_list = ft_create_elem(text1);
	linked_list->next = ft_create_elem(text2);
	linked_list->next->next = ft_create_elem(text3);
	
	printf("Original list:\n");
	ft_print_list(linked_list);

	ft_list_push_back(&linked_list, text4);
	
	printf("New list:\n");
	ft_print_list(linked_list);

	free(linked_list);
}