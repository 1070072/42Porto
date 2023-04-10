/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:01:02 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/04/10 19:01:05 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy; 
}	t_stock_str;

#endif