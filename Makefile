# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 02:59:36 by clovella          #+#    #+#              #
#    Updated: 2021/11/17 08:35:53 by clovella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := clang
CFLAGS := -Wall -Wextra -Werror -O2 -MMD
ARFLAGS := rs
OS := $(shell uname -s)

NAME_BASE := libft
NAME := $(NAME_BASE).a
NAME_BONUS := $(NAME_BASE)_bonus.a
NAME_ALL := $(NAME_BASE)_all.a
SONAME := libft.so

SRC := ft_atoi.c ft_isdigit.c ft_memchr.c ft_putendl_fd.c ft_striteri.c \
	ft_strncmp.c ft_toupper.c ft_bzero.c ft_isprint.c ft_memcmp.c ft_putnbr_fd.c \
	ft_strjoin.c ft_strnstr.c ft_calloc.c ft_itoa.c ft_memcpy.c ft_putstr_fd.c \
	ft_strlcat.c ft_strrchr.c ft_isalnum.c ft_memmove.c ft_split.c ft_strlcpy.c \
	ft_strtrim.c ft_isalpha.c ft_memset.c ft_strchr.c ft_strlen.c ft_substr.c \
	ft_isascii.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c
SRC_BONUS := ft_lstiter_bonus.c ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstmap_bonus.c \
	ft_lstadd_front_bonus.c ft_lstnew_bonus.c ft_lstclear_bonus.c ft_lstsize_bonus.c 
OBJ := $(SRC:.c=.o)
OBJ_BONUS := $(SRC_BONUS:.c=.o)
DEPS := $(SRC:.c=.d) $(SRC_BONUS:.c=.d)

.SECONDARY:
.PHONY: all clean fclean re bonus

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $?

all: $(NAME_ALL)

bonus: $(NAME_BONUS)

clean:
	$(RM) $(DEPS) $(OBJ) $(OBJ_BONUS) $(NAME_ALL) $(NAME_BONUS)

fclean: clean
	$(RM) $(NAME) $(SONAME)

re: fclean all

-include $(DEPS)

$(NAME_BONUS):: $(OBJ_BONUS) | create_bonus_link
	$(AR) $(ARFLAGS) $@ $?

.PHONY: create_bonus_link
create_bonus_link:
	touch $(NAME)
	ln -f $(NAME) $(NAME_BONUS)

$(NAME_ALL):: $(OBJ) $(OBJ_BONUS) | create_all_link
	$(AR) $(ARFLAGS) $@ $?

.PHONY: create_all_link
create_all_link:
	touch $(NAME)
	ln -f $(NAME) $(NAME_ALL)
ifeq ($(OS),Linux)

so:
	$(CC) -fPIC -c $(CFLAGS) $(SRC) $(SRC_BONUS)
	$(CC) -shared -o $(SONAME) $(OBJ) $(OBJ_BONUS)
endif

.PHONY: test test-ut test-t test-remove
test: test-ut test-t

test-ut: libft-unit-test
	cd libft-unit-test && make LIBFTDIR=../ && ./run_test

test-t: libftTester
	$(RM) $(SONAME)
	cd libftTester && make a

test-remove:
	$(RM) -r libft-unit-test
	$(RM) -r libftTester

libft-unit-test:
	git clone https://github.com/alelievr/libft-unit-test.git

libftTester:
	git clone https://github.com/Tripouille/libftTester.git
