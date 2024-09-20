CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SDIR = ./srcs
IDIR = ./includes
SRCS = $(SDIR)/ft_putchar.c $(SDIR)/ft_swap.c $(SDIR)/ft_putstr.c $(SDIR)/ft_strlen.c $(SDIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(IDIR)/ft.h
	$(CC) -c $(CFLAGS) $< -o $@ -I $(IDIR)

.PHONY: all clean fclean re
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
