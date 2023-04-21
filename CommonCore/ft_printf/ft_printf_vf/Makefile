# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 22:23:12 by jrocha-v          #+#    #+#              #
#    Updated: 2023/04/21 21:17:41 by jrocha-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= cc -Wall -Wextra -Werror
AR			= ar -rcs
RM			= rm -rf
SRCS		= ft_printf.c ft_printf_utils.c
#OUT			= && ./a.out
 
OBJS		= ${SRCS:.c=.o}


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

#bonus: $(OBJS)
#	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
