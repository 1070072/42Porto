/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:31:25 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/28 10:37:06 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
	static char *buffer;
	int 		r;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));	
	r = read(fd, buffer, BUFFER_SIZE);
	printf("(%i)", r);
	return (buffer);
}

int main()
{
	char	*line;
	int 	fd1;
	int 	i;

	i = 1;
	fd1 = open("pulp_fiction.txt", O_RDONLY);
	
	while (i < 10)
	{
		line = get_next_line(fd1);
		printf("[%i]: %s", i, line);
		free(line);
		i++;		
	}
	close(fd1);
	return(0);
}
