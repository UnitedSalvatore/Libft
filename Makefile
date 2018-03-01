NAME = libft.a

LIBFT_DIR = ./libft
FT_GETLINE_DIR = ./ft_getline
FT_PRINTF_DIR = ./ft_printf


LIBFT_SRC = $(find $(LIBFT_DIR)/ -name "*.c")
FT_GETLINE_SRC = $(find $(FT_GETLINE_DIR)/ -name "*.c")
FT_PRINTF_SRC = $(find $(FT_PRINTF_DIR)/ -name "*.c")

all: $(NAME)

$(NAME): $(PROJECTS)
	ar rc $(NAME) $(PROJECTS)
	ranlib $(NAME)

$(PROJECTS):
	make -C $(LIBFT_DIR)/
	make -C $(FT_GETLINE_DIR)/
	make -C $(FT_PRINTF_DIR)/

clean:
	make -C $(LIBFT_DIR)/ clean
	make -C $(FT_GETLINE_DIR)/ clean
	make -C $(FT_PRINTF_DIR)/ clean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
