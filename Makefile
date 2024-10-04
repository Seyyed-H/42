# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 18:47:41 by amsoltan          #+#    #+#              #
#    Updated: 2024/10/04 18:47:41 by amsoltan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
PRINTF_SRCS = search_format.c ft_printf.c main.c
LIBFT_SRCS = libft/ft_itoa.c libft/ft_itoa_base.c
SRCS = $(PRINTF_SRCS) $(LIBFT_SRCS)
OBJS = $(SRCS:.c=.o)
INCLUDES = -I includes -I libft

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
