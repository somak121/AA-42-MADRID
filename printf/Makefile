
NAME		= libftprintf.a

CC			= cc
RM			= rm -f
CFLAGS		= -Wall -Werror -Wextra

SRCS = ft_printf_char.c ft_print_str.c ft_print_int.c \
		ft_printf_int_unsigned.c ft_print_hex.c \
		ft_print_ptr.c ft_print_percent.c

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)
		
clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY		all clean fclean re

.DEFAULT_GOAL = all
