NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS =	ft_toupper.c \
		ft_tolower.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strjoin.c \
		ft_strdup.c \
		ft_strchr.c \
		ft_split.c \
		ft_memset.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_isprint.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_calloc.c \
		ft_bzero.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

SRCS_BONUS = ft_lstnew.c \

OBJ = $(SRCS:.c=.o)
OBJ_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus