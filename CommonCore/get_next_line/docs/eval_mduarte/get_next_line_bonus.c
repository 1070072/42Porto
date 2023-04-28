/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduarte- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:53:31 by mduarte-          #+#    #+#             */
/*   Updated: 2023/03/29 17:53:38 by mduarte-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	static char	*text[FOPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > FOPEN_MAX)
		return (NULL);
	text[fd] = first_line(text[fd], fd);
	if (!text[fd])
		return (NULL);
	line = print_line(text[fd]);
	text[fd] = clean_text(text[fd]);
	return (line);
}

/*int	main(void)
{
	char	*line;
	char	*line2;
	int		i;
	int		fd1;
	int		fd2;
	fd1 = open("l.txt", O_RDONLY);
	fd2 = open("a.txt", O_RDONLY);
	i = 0;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf(" %s", line);
		free(line);
		line2 = get_next_line(fd2);
		printf("%s", line2);
		free(line2);
		i++;
	}
	close(fd1);
	close(fd2);
	return (0);
}*/