# Nom de la bibliothèque
NAME = libft.a

# Dossiers des sources et des objets
SRC_DIR = src
OBJ_DIR = obj

# Compilateur et flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(INCLUDES)

# Dossiers et fichiers pour les différentes parties de la librairie
INCLUDES = include
FT_LIBC_DIR = ft_libc
FT_SUPP_DIR = ft_supp
FT_BONUS_DIR = ft_bonus

# Liste des fichiers source et objet
SRC_FILES += $(wildcard $(FT_LIBC_DIR)/*.c)
SRC_FILES += $(wildcard $(FT_SUPP_DIR)/*.c)
BONUS_FILES += $(wildcard $(FT_BONUS_DIR)/*.c)

OBJ_FILES = $(addprefix $(OBJ_DIR)/,$(notdir $(SRC_FILES:.c=.o)))
BONUS_OBJ_FILES = $(addprefix $(OBJ_DIR)/,$(notdir $(BONUS_FILES:.c=.o)))

# Règles
all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(AR) rc $(NAME) $^
	ranlib $(NAME)
	@echo "Libft compiled!"

$(OBJ_DIR)/%.o: $(FT_LIBC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(FT_SUPP_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(FT_BONUS_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

bonus: $(BONUS_OBJ_FILES)
	$(AR) rc $(NAME) $^
	ranlib $(NAME)
	@echo "Libft bonus compiled!"

clean:
	rm -rf $(OBJ_DIR)
	@echo "Libft objects files cleaned!"

fclean: clean
	rm -f $(NAME)
	@echo "Libft executable files cleaned!"

re: fclean all
	@echo "Cleaned and rebuilt everything for libft!"

.PHONY: all bonus clean fclean re
