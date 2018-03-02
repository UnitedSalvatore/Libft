NAME =	libft.a

LIBFT_DIR		= ./libft
LIBFT_SRC		= $(wildcard $(LIBFT_DIR)/*.c)
LIBFT_OBJ		= $(addprefix $(LIBFT_DIR)/obj/, $(notdir $(LIBFT_SRC:.c=.o)))

FT_GETLINE_DIR	= ./ft_getline
FT_GETLINE_SRC	= $(wildcard $(FT_GETLINE_DIR)/*.c)
FT_GETLINE_OBJ	= $(addprefix $(FT_GETLINE_DIR)/obj/, $(notdir $(FT_GETLINE_SRC:.c=.o)))

FT_PRINTF_DIR	= ./ft_printf
FT_PRINTF_SRC	= $(wildcard $(FT_PRINTF_DIR)/*.c)
FT_PRINTF_OBJ	= $(addprefix $(FT_PRINTF_DIR)/obj/, $(notdir $(FT_PRINTF_SRC:.c=.o)))

SOURCES = $(LIBFT_SRC) $(FT_GETLINE_SRC) $(FT_PRINTF_SRC)
OBJECTS = $(LIBFT_OBJ) $(FT_GETLINE_OBJ) $(FT_PRINTF_OBJ)

all: $(NAME)

$(NAME): projects
	ar rc $(NAME) $(OBJECTS)
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
