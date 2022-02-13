$(MOD_NAME)_OBJ:=$(patsubst %.c,$(OBJ_DIR)/$(MOD_NAME)/%.o,$(MOD_SRC))
OBJ:=$(OBJ) $($(MOD_NAME)_OBJ)
$(MOD_NAME): lib$(MOD_NAME).a

lib$(MOD_NAME).a : $(patsubst %,$$(%_OBJ),$(MOD_DEPS) $(MOD_NAME))

$($(MOD_NAME)_OBJ):|$(OBJ_DIR)/$(MOD_NAME) $(DEP_DIR)/$(MOD_NAME)

$(OBJ_DIR)/$(MOD_NAME):
	mkdir -p $@

$(DEP_DIR)/$(MOD_NAME):
	mkdir -p $@