/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .get_next_line copy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:31:25 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/28 14:28:06 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "get_next_line.h"

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# define BUFFER_SIZE 1

size_t	ft_strlen(const char *s)
{
	size_t	i;
	
	i = 0;
	if (!s)
		return (0);	
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == (unsigned char) c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	return (0);
}

char	*ft_strjoin(char *bufftxt, char *temp)
{
	char	*join;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	if (!bufftxt)
	{
		bufftxt = malloc(sizeof(char) * 1);
		bufftxt[0] = '\0';
	}
	join = malloc(sizeof(char) * (ft_strlen(bufftxt) + ft_strlen(temp) + 1));
	if (!join)
		return (NULL);
	while (bufftxt[++i])
		join[i] = bufftxt[i];
	while (temp[++j])
		join[j + i] = temp[j];
	join[i + j] = '\0';
	return (join);
}

char	*ft_strtrim_l(char *bufftxt)
{
	char	*final_line;
	size_t	i;
	size_t	j;
	
	i = 0;
	while (bufftxt[i] && bufftxt[i] != '\n')
		i++;
	if (!bufftxt)
		return (NULL);
	final_line = malloc(sizeof(char) * (i + 2));
	j = -1;
	while (++j <= i)
		final_line[j] = bufftxt[j];
	final_line[j] = '\0';
	return (final_line);
}

char	*ft_strtrim_r(char *bufftxt)
{
	char	*next_line;
	size_t	i;
	size_t	j;
	
	i = 0;
	while (bufftxt[i] && bufftxt[i] != '\n')
		i++;
	if (!bufftxt)
		return (NULL);
	next_line = malloc(sizeof(char) * (ft_strlen(bufftxt) - i));
	j = -1;
	while (++i < ft_strlen(bufftxt))
		next_line[++j] = bufftxt[i];
	next_line[++j] = '\0';
	free(bufftxt);
	return (next_line);
}

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

int main()
{
	char	*line;
	int 	fd1;
	int 	i;

	i = 1;
	fd1 = open("rick_morty.txt", O_RDONLY);
	
	while (i < 22)
	{
		line = get_next_line(fd1);
		printf("[%i]: %s", i, line);
		free(line);
		i++;		
	}
	close(fd1);
	return(0);
}
