/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:18:28 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/24 10:58:46 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  DESCRIPTION:
** 	The strlcpy() and strlcat() functions copy and concatenate strings
**	respectively.  They are designed to be safer, more consistent, and less
**	error prone replacements for strncpy(3) and strncat(3).  Unlike those
**	functions, strlcpy() and strlcat() take the full size of the buffer (not
**	just the length) and guarantee to NUL-terminate the result (as long as
**	size is larger than 0 or, in the case of strlcat(), as long as there is
**	at least one byte free in dst).  Note that you should include a byte for
**	the NUL in size.  Also note that strlcpy() and strlcat() only operate on
**	true "c" strings.  This means that for strlcpy() src must be NUL-termi-
**	nated and for strlcat() both src and dst must be NUL-terminated.
**
** 	The strlcpy() function copies up to size - 1 characters from the NUL-
**	terminated string src to dst, NUL-terminating the result.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}

/*
Esta função recebe como entrada uma string de destino e uma
string de origem, além de um tamanho máximo para a string
de destino. Ela copia a string de origem para a string de destino,
mas garante que a string de destino tenha no máximo o tamanho
especificado. Além disso, a função retorna o tamanho da string
de origem.

O tipo de dado size_t é um tipo de dado inteiro sem sinal que
é usado para representar tamanhos de objetos em bytes. É usado
principalmente para funções de alocação de memória. A função
ft_strlcpy retorna um size_t.

A primeira linha da função declara uma variável i do tipo
size_t e inicializa seu valor como zero.

A próxima linha verifica se o tamanho da string de destino
é diferente de zero. Se for, a função executa um loop enquanto
a string de origem não acabar e enquanto o contador i for menor
do que o tamanho da string de destino menos um.

A cada iteração do loop, a função copia um caractere da string
de origem para a string de destino e incrementa o contador i.

Depois de sair do loop, a função adiciona o caractere nulo ao
final da string de destino para sinalizar o fim da string.

Por fim, a função retorna o tamanho da string de origem usando
a função ft_strlen.
*/
