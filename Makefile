# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 02:59:36 by clovella          #+#    #+#              #
#    Updated: 2022/02/21 03:21:53 by clovella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 		:=	libft.a
SO_NAME 	:=	$(NAME:.a=.so)
DEBUG_NAME 	:=	$(NAME:.a=_dbg.a)
MODULES 	:=	ft_lst ft_std ft_str

SRC_DIR		:=	src
OBJ_DIR		:=	obj
DEP_DIR		:=	dep

.SECONDEXPANSION:
.SECONDARY:
.PHONY: all clean fclean re debug so

$(NAME): CFLAGS += -O3
$(NAME): $$(OBJ)

$(DEBUG_NAME): CFLAGS += -g
$(DEBUG_NAME): $$(OBJ)

$(SO_NAME): CFLAGS += -O3 -fPIC
$(SO_NAME): $$(OBJ)
	gcc -shared -o $@ $^

include conf.mk $(patsubst %,$(SRC_DIR)/%/mod.mk,$(MODULES))

all: $(NAME) $(patsubst %,lib%.a,$(MODULES))

debug: $(DEBUG_NAME)

so: $(SO_NAME)

clean:
	$(RM) $(OBJ_DIR) $(DEP_DIR)

fclean: clean
	$(RM) lib*.a lib*.so

re: fclean all

-include $(patsubst $(OBJ_DIR)/%.o,$(DEP_DIR)/%.d,$(OBJ))
