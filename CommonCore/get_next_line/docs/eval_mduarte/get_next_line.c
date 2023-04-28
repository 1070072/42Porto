/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:55:14 by mduarte-          #+#    #+#             */
/*   Updated: 2023/04/20 12:46:58 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*clean_text(char *text)
{
	int		i;
	int		j;
	char	*keeper;

	i = 0;
	j = 0;
	while (text[i] != '\n' && text[i])
		i++;
	if (!text[i])
	{
		free(text);
		return (NULL);
	}
	keeper = ft_calloc((ft_strlen(text) - i + 1), sizeof(char));
	i++;
	while (text[i])
	{
		keeper[j] = text[i];
		j++;
		i++;
	}
	free(text);
	return (keeper);
}

char	*ft_join(char *text, char *buffer)
{
	char	*final;

	final = ft_strjoin(text, buffer);
	free (text);
	return (final);
}

char	*print_line(char *text)
{
	int		i;
	char	*str;

	i = 0;
	if (!text[i])
		return (NULL);
	while (text[i] && text[i] != '\n')
	{
		i++;
	}
	str = ft_calloc((i + 2), sizeof(char));
	i = 0;
	while (text[i] != '\n' && text[i] != '\0')
	{
		str[i] = text[i];
		i++;
	}
	if (text[i] == '\n')
		str[i] = '\n';
	return (str);
}

char	*first_line(char *text, int fd)
{
	char	*buffer;
	int		count_bytes;

	if (!text)
		text = ft_calloc(1, 1);
	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	count_bytes = 1;
	while (!ft_strchr(text, '\n') && count_bytes != 0)
	{
		count_bytes = read(fd, buffer, BUFFER_SIZE);
		if (count_bytes == -1)
		{
			free (text);
			free (buffer);
			return (NULL);
		}
		buffer[count_bytes] = '\0';
		text = ft_join(text, buffer);
	}
	free (buffer);
	return (text);
}

char	*get_next_line(int fd)
{
	static char	*text;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	text = first_line(text, fd);
	if (!text)
		return (NULL);
	line = print_line(text);
	text = clean_text(text);
	return (line);
}

/*int	main(void)
{
	int		fd;
	char	*s;
	int		i;

	i = 1;
	fd = open("l.txt", O_RDONLY);
	while (i <= 53)
	{
		s = get_next_line(fd);
		printf("line [%d]: %s", i, s);
		free(s);
		i++;
	}
	close(fd);
	return (0);
}*/
