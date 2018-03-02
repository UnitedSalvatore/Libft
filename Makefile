NAME =	libft.a

LIBFT_DIR		= ./libft
FT_GETLINE_DIR	= ./ft_getline
FT_PRINTF_DIR	= ./ft_printf

all: $(NAME)

$(NAME): projects
	ar rc $(NAME)
	$(wildcard $(LIBFT_DIR)/obj/*.o)
	$(wildcard $(FT_GETLINE_DIR)/obj/*.o)
	$(wildcard $(FT_PRINTF_DIR)/obj/*.o)
	ranlib $(NAME)

projects:
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
