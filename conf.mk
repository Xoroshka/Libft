
.DEFAULT_GOAL	:= $(NAME)
MOD_INCLUDE		:= mod_include.mk

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(OPTFLAGS) -c -I include -MMD -MF $(DEP_DIR)/$*.d $< -o $@

$(OBJ_DIR)/%_debug.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -g -c -I include -MMD -MF $(DEP_DIR)/$*.d $< -o $@

$(OBJ_DIR)/%_shared.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(OPTFLAGS) -fPIC -c -I include -MMD -MF $(DEP_DIR)/$*.d $< -o $@

%.a:
	$(AR) $(ARFLAGS) $@ $?

include $(patsubst %,$(SRC_DIR)/%/mod.mk,$(MODULES))

$(NAME): $(OBJ)

$(DEBUG_NAME): $(OBJ:.o=_debug.o)

$(SO_NAME): $(OBJ:.o=_shared.o)
	gcc -shared -o $@ $^

-include $(patsubst $(OBJ_DIR)/%.o,$(DEP_DIR)/%.d,$(OBJ))