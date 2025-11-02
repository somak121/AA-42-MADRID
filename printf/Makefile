# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smikhail  <smikhail@student.42madrid.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/02 15:26:41 by smikhail          #+#    #+#              #
#    Updated: 2025/11/02 18:15:43 by smikhail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= libftprintf.a

CC			= cc
RM			= rm -f
CFLAGS		= -Wall -Werror -Wextra

SRCS = ft_print_char.c ft_print_hex.c ft_print_int.c ft_printf.c

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re

.DEFAULT_GOAL = all
