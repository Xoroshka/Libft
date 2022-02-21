# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 02:59:36 by clovella          #+#    #+#              #
#    Updated: 2022/02/21 12:33:57 by clovella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := clang
CFLAGS := -Wall -Wextra -Werror
OPTFLAGS := -O3
ARFLAGS := rs
RM := rm -rf

NAME 		:=	libft.a
SO_NAME 	:=	$(NAME:.a=.so)
DEBUG_NAME 	:=	$(NAME:.a=_dbg.a)
MODULES 	:=	ft_lst ft_std ft_str

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

