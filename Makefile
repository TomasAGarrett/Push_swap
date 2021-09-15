LIBFT = libft/libft.a
NAME = push_swap
SRCS = srcs/swap.c \
	   srcs/rotate.c \
	   srcs/rrotate.c \
	   srcs/push.c \
	   srcs/error_handling.c \
	   srcs/sort.c \
	   srcs/main.c
	   
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror -g
INCS = -Llibft -lft
CC = gcc

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -Iincludes -c -o $@ $<

$(NAME): $(OBJS)
	$(MAKE) -C ./LIBFT
	$(CC) $(FLAGS) $(INCS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
	$(MAKE) clean -C ./libft

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C ./libft

re : fclean all

.PHONY: clean all fclean re