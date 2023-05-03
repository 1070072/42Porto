/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:05:08 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/22 16:06:04 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  The fputc() function writes the character c (converted to an ``unsigned
**	char'') to the output stream pointed to by stream.
**  42 PDF] Outputs the character ’c’ to the given file descriptor.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
