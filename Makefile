# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 02:59:36 by clovella          #+#    #+#              #
#    Updated: 2022/04/29 03:34:28 by clovella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := clang
CFLAGS := -Wall -Wextra -Werror
OPTFLAGS := -O3
ARFLAGS := rs
RM := rm -rf

NAME 		:=	libft.a
SO_NAME 	:=	$(NAME:.a=.so)
DEBUG_NAME 	:=	$(NAME:.a=_debug.a)
MODULES 	:=	std lst str vec

SRC_DIR		:=	src
OBJ_DIR		:=	obj
DEP_DIR		:=	dep

include conf.mk

.PHONY: all debug so clean fclean re

all: $(NAME)

debug: $(DEBUG_NAME)

so: $(SO_NAME)

clean:
	$(RM) $(OBJ_DIR) $(DEP_DIR)

fclean: clean
	$(RM) $(NAME) $(DEBUG_NAME) $(SO_NAME)

re: fclean all

