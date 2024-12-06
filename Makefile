# Compiler settings
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -g

# Directories
BSE_DIR	=	.
SRC_DIR	=	$(BSE_DIR)/src
HDR_DIR	=	$(BSE_DIR)/includes
OBJ_DIR	=	$(BSE_DIR)/obj
BIN_DIR	=	$(BSE_DIR)/bin

# Source files
SRCS	=	\
			$(SRC_DIR)/ft_copyarr.c \
			$(SRC_DIR)/ft_count_nums.c \
			$(SRC_DIR)/ft_flags_to_num.c \
			$(SRC_DIR)/ft_free_map.c \
			$(SRC_DIR)/ft_isdigit.c \
			$(SRC_DIR)/ft_isspace.c \
			$(SRC_DIR)/ft_parse_map.c \
			$(SRC_DIR)/ft_print_map.c \
			$(SRC_DIR)/ft_putchar.c \
			$(SRC_DIR)/ft_putstr.c \
			$(SRC_DIR)/ft_putuint.c \
			$(SRC_DIR)/ft_single_flag.c \
			$(SRC_DIR)/ft_solve_map.c \
			$(SRC_DIR)/ft_split_nums.c \
			$(SRC_DIR)/ft_strlen.c \
			$(SRC_DIR)/ft_subatoui.c \
			$(SRC_DIR)/main.c \

# Object files
OBJS	=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Targets
NAME	=	skyscraper
TARGET	=	$(BIN_DIR)/$(NAME)

all: $(TARGET)

$(TARGET): $(OBJS)
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $< -I $(HDR_DIR)

clean:
	rm -f $(OBJS)
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(TARGET)
	rm -rf $(BIN_DIR)

re: fclean all

.PHONY: all, clean, fclean,  re
