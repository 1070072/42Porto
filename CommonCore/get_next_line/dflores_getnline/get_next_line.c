/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflores- <dflores-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:47:46 by dflores-          #+#    #+#             */
/*   Updated: 2023/04/17 18:08:56 by dflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	free_null(char **ptr)
{
	free(*ptr);
	*ptr = NULL;
}

char	*get_line_from_buffer(int nl_position, char **buffer)
{
	char	*line;
	char	*tmp;

	tmp = NULL;
	if (nl_position <= 0)
	{
		if (!**buffer)
		{
			free_null(buffer);
			return (NULL);
		}
		line = *buffer;
		*buffer = NULL;
		return (line);
	}
	tmp = ft_substr(*buffer, nl_position, BUFFER_SIZE);
	line = *buffer;
	line[nl_position] = 0;
	*buffer = tmp;
	return (line);
}

char	*read_line(int fd, char **buffer, char *read_buffer)
{
	ssize_t	bytes_read;
	char	*tmp;
	char	*nl;

	nl = ft_strchr(*buffer, '\n');
	tmp = NULL;
	bytes_read = 0;
	while (!nl)
	{
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			return (get_line_from_buffer(bytes_read, buffer));
		read_buffer[bytes_read] = 0;
		tmp = ft_strjoin(*buffer, read_buffer);
		free_null(buffer);
		*buffer = tmp;
		nl = ft_strchr(*buffer, '\n');
	}
	return (get_line_from_buffer(nl - *buffer + 1, buffer));
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*read_buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!read_buffer)
		return (NULL);
	if (!buffer)
		buffer = ft_strdup("");
	line = read_line(fd, &buffer, read_buffer);
	free_null(&read_buffer);
	return (line);
}
