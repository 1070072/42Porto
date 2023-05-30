/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:32:20 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/30 13:02:10 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;		

	return (elem);
}

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
	char		*text4 = "24";
	char		*text5 = "bdsfg";

	linked_list = ft_create_elem(text1);
	linked_list->next = ft_create_elem(text2);
	linked_list->next->next = ft_create_elem(text3);
	linked_list->next->next->next = ft_create_elem(text4);
	linked_list->next->next->next->next = ft_create_elem(text5);
		
	printf("Original list:\n");
	ft_print_list(linked_list);

	ft_list_reverse(&linked_list);
	
	printf("Reversed list:\n");
	ft_print_list(linked_list);
	
	free(linked_list);
}
