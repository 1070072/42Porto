/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinto-m <rpinto-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:36:07 by rpinto-m          #+#    #+#             */
/*   Updated: 2023/04/21 18:36:11 by rpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// BZERO(3)                BSD Library Functions Manual                BZERO(3)
//
// NAME
//      bzero -- write zeroes to a byte string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <strings.h>
//
//      void
//      bzero(void *s, size_t n);
//
// DESCRIPTION
//      The bzero() function writes n zeroed bytes to the string s.  
//		If n is zero, bzero() does nothing.
*/

#include "libft.h" // size_t is defined in header <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
A função "void ft_bzero (void *s, size_t n)" serve para preencher com
zeros (ou "null") uma área de memória do tamanho especificado por "n".
A expressão "void" indica que a função não retorna nada. "s" é um ponteiro
para o início da área de memória a ser preenchida e "n" é o número de bytes
a serem preenchidos. A função utiliza a função "ft_memset" para fazer a 
operação de preenchimento.
*/
