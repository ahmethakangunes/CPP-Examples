NAME = miniwar
CC = g++
CFLASG = -Wall -Wextra -Werror
SRCS = gun.cpp miniwar.cpp player.cpp
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -rf ${NAME}

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: fclean re all clean