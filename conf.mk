CC := clang
CFLAGS := -Wall -Wextra -Werror -MMD -I include
ARFLAGS := rs
RM := rm -rf

MOD_INCLUDE := mod_include.mk
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -MF $(DEP_DIR)/$*.d $< -o $@

%.a:
	$(AR) $(ARFLAGS) $@ $(filter %.o,$?)
