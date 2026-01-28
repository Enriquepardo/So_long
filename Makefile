NAME		= so_long

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -Iinc -Ilibft -I$(MLX_DIR)

SRC_DIR		= src
INC_DIR		= inc
LIBFT_DIR	= libft
MLX_DIR		= minilibx-linux

LIBFT		= $(LIBFT_DIR)/libft.a

MLX_FLAGS	= -L$(MLX_DIR) -lmlx -lXext -lX11 -lm -lz

SRC = \
	$(SRC_DIR)/main.c \
	$(SRC_DIR)/open_map.c \
    $(SRC_DIR)/utils.c

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@echo "\033[36m--> compiling Libft...\033[0m"
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(MLX_FLAGS) -o $(NAME)
	@echo "\033[32m✔ $(NAME) successfully compiled\033[0m"

clean:
	@rm -f $(OBJ)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@echo "\n\033[31mDeleting EVERYTHING!\n"

re: fclean all

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re