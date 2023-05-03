/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:48:27 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/22 12:51:27 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* LIBRARY: <string.h>
** SYNOPSIS: find a substring within a string
** DESCRIPTION: searches for the first occurrence of a
** null-terminated string needle within another null-terminated
** string haystack, but only up to the first len characters of haystack.
** If needle is an empty string, haystack is returned;
** if needle does not occur in haystack, NULL is returned;
** otherwise, a pointer to the first character of the first occurrence
** of needle is returned.
** Both haystack and needle must be null-terminated strings.
** If either haystack or needle is NULL, the function returns NULL.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*
A função ft_strnstr procura a primeira ocorrência da string needle em haystack,
mas no máximo em um comprimento de len caracteres. A função retorna um ponteiro
para a primeira ocorrência de needle em haystack, ou NULL se needle não for
encontrada.

A função começa verificando se needle é uma string vazia. Nesse caso, a
função simplesmente retorna um ponteiro para o início de haystack.

A seguir, a função itera através de haystack. Dentro do loop while externo,
a função inicializa uma variável j para 0 e começa a verificar se os caracteres
de needle correspondem aos caracteres de haystack a partir da posição i + j.
Se esses caracteres correspondem e a soma de i e j é menor que len,
a função incrementa j e continua verificando o próximo caractere.
Se os caracteres de haystack e needle correspondem e j atinge o final de needle,
a função retorna um ponteiro para a posição atual de i em haystack.

Se os caracteres não correspondem, a função incrementa i e começa a buscar a
partir da próxima posição em haystack. Se o final de haystack é alcançado e a
função não encontrou uma correspondência para needle, a função retorna NULL.
*/
