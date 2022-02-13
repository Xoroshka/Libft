# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 02:59:36 by clovella          #+#    #+#              #
#    Updated: 2022/02/13 19:37:46 by clovella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 		:=	libft.a
SO_NAME 	:=	$(NAME:.a=.so)
DEBUG_NAME 	:=	$(NAME:.a=_dbg.a)
MODULES 	:=	ft_lst ft_std

SRC_DIR		:=	src
OBJ_DIR		:=	obj
DEP_DIR		:=	dep

.SECONDEXPANSION:
.SECONDARY:
.PHONY: all clean fclean re debug test

$(NAME): $$(OBJ) | $$(call dirs,$$(MODULES))

include conf.mk $(patsubst %,$(SRC_DIR)/%/mod.mk,$(MODULES))

all: $(NAME) $(patsubst %,lib%.a,$(MODULES))

debug: $(DEBUG_NAME)

clean:
	$(RM) $(OBJ_DIR) $(DEP_DIR)

fclean: clean
	$(RM) lib*.a

re: fclean all

# -include $(DEPS)
