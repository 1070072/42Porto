/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:31:25 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/28 14:28:54 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_text(int fd, char *bufftxt)
{
	char	*temp;
	size_t	rbytes;

	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (NULL);
	rbytes = 1;
	while (!ft_strchr(bufftxt, '\n') && rbytes != 0)	
	{
		rbytes = read(fd, temp, BUFFER_SIZE);
		temp[rbytes] = '\0';
		bufftxt = ft_strjoin(bufftxt, temp);	
	}
	free (temp);
	return (bufftxt);
}

char	*get_next_line(int fd)
{
	static char	*bufftxt;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	bufftxt = ft_get_text(fd, bufftxt);
	if (!bufftxt)
		return (NULL);
	line = ft_strtrim_l(bufftxt);
	bufftxt = ft_strtrim_r(bufftxt);
	return (line);
}
