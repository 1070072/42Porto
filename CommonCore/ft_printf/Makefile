# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 22:23:12 by jrocha-v          #+#    #+#              #
#    Updated: 2023/04/20 17:41:54 by jrocha-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= printf
CC			= cc -Wall -Wextra -Werror
#AR			= ar -rcs
RM			= rm -rf
SRCS		= ft_printf.c ft_printf_utils.c
OUT			= && ./a.out
 
#OBJS		= ${SRCS:.c=.o}


all: $(NAME)

$(NAME):
	@$(CC) $(SRCS) $(OUT)

#bonus: $(OBJS)
#	$(AR) $(NAME) $(OBJS)

#clean:
#	$(RM) $(OBJS)

#fclean: clean
#	$(RM) $(NAME)

#re: fclean all
