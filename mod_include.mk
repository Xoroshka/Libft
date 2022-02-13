MOD_OBJ:=$(patsubst %.c,$(OBJ_DIR)/$(MOD_NAME)/%.o,$(MOD_SRC))
OBJ:=$(OBJ) $(MOD_OBJ)

$(MOD_NAME): lib$(MOD_NAME).a

lib$(MOD_NAME).a : $(MOD_OBJ)

$(MOD_OBJ):|$(OBJ_DIR)/$(MOD_NAME) $(DEP_DIR)/$(MOD_NAME)

$(OBJ_DIR)/$(MOD_NAME):
	mkdir -p $@

$(DEP_DIR)/$(MOD_NAME):
	mkdir -p $@