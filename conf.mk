CC := clang
CFLAGS := -Wall -Wextra -Werror -O2 -MMD -I include
ARFLAGS := rs
RM := rm -rf

OS := $(shell uname -s)
ifeq ($(OS),Linux)
ARFLAGS := rsU
endif
MOD_INCLUDE := mod_include.mk
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -MF $(DEP_DIR)/$*.d $< -o $@

%.a:
	$(AR) $(ARFLAGS) $@ $^
