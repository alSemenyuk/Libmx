# ======== variables ========
NAME = libmx.a

# -- files and dirs --
SRC_DIR := src
OBJ_DIR := obj
INC_DIR := inc

SRC_FILES := $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES := $(addprefix $(OBJ_DIR)/, $(notdir $(SRC_FILES:%.c=%.o)))
INC_FILES := $(wildcard $(INC_DIR)/*.h)

# -- commands --
MKDIR := mkdir -p
RM := rm -rf

CC := clang
FLAGS := -std=c11 -Wall -Wextra -Werror -Wpedantic

# ========== body =========
all: install

install: $(NAME)

$(NAME): $(OBJ_FILES)
	@ar rcs $@ $^

$(OBJ_FILES): | $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_FILES)
	@$(CC) $(FLAGS) -c  $< -o $@ -I $(INC_DIR)

$(OBJ_DIR):
	@$(MKDIR) $@

uninstall: clean
	@$(RM) $(NAME)

clean:
	@$(RM) $(OBJ_DIR)

reinstall: uninstall install

.PHONY: all uninstall clean reinstall
