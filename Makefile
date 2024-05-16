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
		ft_free_tab.c \
		ft_intlen.c \
		ft_putnbr.c \
		ft_putchar.c \

SRCS_BONUS =	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \

OBJ = $(SRCS:.c=.o)
OBJ_BONUS = $(SRCS_BONUS:.c=.o)

BLACK = \033[30m
RESET = \033[0m
BOLD = \033[1m
GREEN = \033[32m

all: $(NAME)

$(NAME): $(OBJ)
	@progress=0; \
	for file in $(OBJ); do \
		printf "$(BOLD)[%d%%]$(BLACK)\033[K$(RESET)" $$progress; \
		if [ $$progress -lt 100 ]; then \
			progress=$$((progress + 170 / $(words $(OBJ)))) && progress=$$((progress > 100 ? 100 : progress)); \
		fi; \
		sleep 0.02; \
		printf "\r\033[K"; \
	done
	@ar rcs $(NAME) $(OBJ)
	@echo "$(BOLD)$(GREEN)Compilation successful! | 🔻$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)
	@echo "$(BLACK)$(BOLD)Good clean | 🧹🗑️ $(RESET)"

fclean:
	@rm -f $(NAME)
	@if [ -n "$(OBJ)" ] || [ -n "$(OBJ_BONUS)" ]; then \
		rm -f $(OBJ) $(OBJ_BONUS); \
		echo "$(BLACK)$(BOLD)Big clean | 🧹🗑️ $(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re bonus