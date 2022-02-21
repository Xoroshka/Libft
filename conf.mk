
.DEFAULT_GOAL	:= $(NAME)
MOD_INCLUDE		:= mod_include.mk

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -I include -MMD -MF $(DEP_DIR)/$*.d $< -o $@

%.a:
	$(AR) $(ARFLAGS) $@ $?

include $(patsubst %,$(SRC_DIR)/%/mod.mk,$(MODULES))

$(NAME): CFLAGS += $(OPTFLAGS)
$(NAME): $(OBJ)

$(DEBUG_NAME): CFLAGS += -g
$(DEBUG_NAME): $(OBJ)

$(SO_NAME): CFLAGS += $(OPTFLAGS) -fPIC
$(SO_NAME): $(OBJ)
	gcc -shared -o $@ $^

-include $(patsubst $(OBJ_DIR)/%.o,$(DEP_DIR)/%.d,$(OBJ))