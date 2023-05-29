/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:07:55 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/05/29 14:16:44 by jrocha-v         ###   ########.fr       */
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
	char	**strs = malloc(sizeof(char *) * 4);
    
	strs[0] = "Hello 42!";
	strs[1] = "Ola 42";
	strs[2] = "42";
	strs[3] = "I'm last";

	linked_list = ft_list_push_strs(4, strs);
	
	printf("Strings list:\n");
	ft_print_list(linked_list);

	free(linked_list);
	free(strs);
}
