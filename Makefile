# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = search_format.c ft_printf.c main.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
LIBFT = libft/libft.a

# Rules
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	ar rcs $(NAME) $(OBJ) $(LIBFT)

$(LIBFT):
	make -C libft

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -Ilibft -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re
