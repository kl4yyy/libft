CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_isdigit.c ft_isprint.c ft_memset.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re