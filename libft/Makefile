NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES =	ft_isalpha		\
		ft_isdigit		\
		ft_isalnum		\
		ft_isascii		\
		ft_isprint		\
		ft_memcpy		\
		ft_strlcat		\
		ft_strlen		\
		ft_strncmp		\
		ft_strdup		\
		ft_strjoin		\
		ft_memset		\
		ft_bzero		\
		ft_memmove		\
		ft_memcmp		\
		ft_memchr		\
		ft_toupper		\
		ft_tolower		\
		ft_strchr		\
		ft_strrchr		\
		ft_strlcpy		\
		ft_atoi			\
		ft_strnstr		\
		ft_calloc		\
		ft_substr		\
		ft_putchar_fd	\
		ft_putstr_fd	\
		ft_putendl_fd	\
		ft_putnbr_fd	\
		ft_itoa			\
		ft_strmapi		\
		ft_striteri		\
		ft_strtrim		\
		ft_split		\

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all
