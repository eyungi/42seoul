CC = gcc
CLAGS = -Wall -Wextra -Werror
NAME = do-op
SRCS = 

all : $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $^

.PHONY: all clean fclean re

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: clean all
