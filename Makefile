NAME = ctm_libs

LIB = ctm_libs.a

DIR = ctm_libs

LIB_DIR = lib

RM = rm -f

RMDIR = rm -rf

all: $(NAME)

$(NAME): dir
	$(MAKE) -C $(DIR)
	mv -u $(DIR)/$(LIB) $(LIB_DIR)
	clear

dir:
	mkdir -p $(LIB_DIR)

clean: clean
	$(MAKE) -C $(DIR) clean
	clear

fclean: fclean
	$(MAKE) -C $(DIR) fclean
	$(RMDIR) $(LIB_DIR)
	clear

re: fclean all
	$($(MAKE)) -C $(DIR) re
	clear

.PHONY: all clean fclean re
.SILENT:
