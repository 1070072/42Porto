# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrocha-v <jrocha-v@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 22:23:12 by jrocha-v          #+#    #+#              #
#    Updated: 2023/04/28 10:34:50 by jrocha-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= printf
CC			= cc -Wall -Wextra -Werror
RM			= rm -rf
SRCS		= get_next_line.c get_next_line_utils.c
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
