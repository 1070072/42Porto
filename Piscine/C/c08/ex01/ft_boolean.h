/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:59:32 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/10 18:59:33 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>
#define TRUE	1
#define FALSE	0
#define SUCESS	0
#define	EVEN(x)	x % 2 == 0
#define EVEN_MSG	"I have an even number of arguments.\n"
#define ODD_MSG		"I have an odd number of arguments.\n"
typedef int t_bool;

#endif