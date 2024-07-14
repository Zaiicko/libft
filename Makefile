# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 02:37:49 by zaiicko           #+#    #+#              #
#    Updated: 2024/07/14 23:07:12 by zaiicko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INC_DIR = inc
OBJ_DIR = obj
INC = -I$(INC_DIR)

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
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_printf/ft_checking_f.c \
		ft_printf/ft_printf.c \
		ft_printf/ft_putchar_f.c \
		ft_printf/ft_putnbase.c \
		ft_printf/ft_putnbr_f.c \
		ft_printf/ft_putpointer_f.c \
		ft_printf/ft_putstr_f.c \
		ft_printf/ft_putun_f.c \
		gnl/get_next_line.c \

SRC = $(addprefix $(SRC_DIR)/, $(SRCS))
SRC_DIR = srcs
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
PRINTF_DIR = ft_printf
GNL_DIR = gnl
RM = rm -rf

RED = \033[31m
YELLOW = \033[93m
GREEN = \033[32m
RESET = \033[0m
BOLD = \033[1m

SPINNERS = "🔄 🔁 🔃 🔄 🔁 🔃"

all: $(NAME)

$(NAME): $(OBJ)
	@total=$(words $(OBJ)); \
	count=0; \
	for file in $(OBJ); do \
		src_file=$$(echo $$file | sed 's/$(OBJ_DIR)/$(SRC_DIR)/' | sed 's/\.o$$/\.c/'); \
		$(CC) $(CFLAGS) -c $$src_file -o $$file $(INC); \
		count=$$((count + 1)); \
		percentage=$$((count * 100 / total)); \
		progress=$$((percentage / 2)); \
		spinner=$$(echo $(SPINNERS) | cut -d ' ' -f $$(($$count % 6 + 1))); \
		bar=""; \
		for i in $$(seq 1 $$progress); do bar="$${bar}█"; done; \
		for i in $$(seq $$progress 49); do bar="$${bar}░"; done; \
		if [ $$percentage -eq 100 ]; then \
			bar="███████████████████████████████████████████████████"; \
		fi; \
		printf "\r$(BOLD)$(YELLOW)Compiling : $${bar} $(RESET)$(BOLD)%d%% $${spinner}$(RESET)" $$percentage; \
		sleep 0.01; \
	done; \
	printf "\n"; \
	ar rcs $(NAME) $(OBJ)
	@echo "\n$(BOLD)$(GREEN)Compilation successful! 🔻$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)/$(PRINTF_DIR)
	@mkdir -p $(OBJ_DIR)/$(GNL_DIR)

clean:
	@$(RM) $(OBJ_DIR)
	@echo "$(BOLD)Good clean | 🧹🗑️ $(RESET)"

fclean:
	@$(RM) $(OBJ_DIR)
	@$(RM) $(NAME)
	@if [ -n "$(OBJ)" ]; then \
		$(RM) $(OBJ); \
		echo "$(BOLD)Big clean | 🧹🗑️ $(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re
