CC = gcc
CFLAGS = -ggdb -pedantic-errors -Wall -Wextra -Wconversion -Wsign-conversion -Werror -std=c99 -O2

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
INCLUDE_DIR = include

TARGET = $(BIN_DIR)/main
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

DEPS = $(OBJ_FILES:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CC) $(OBJ_FILES) -o $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

$(OBJ_DIR)/%.d: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) -MM $(CFLAGS) -I$(INCLUDE_DIR) $< > $@

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR) $(TARGET)

run: $(TARGET)
	$(TARGET)

-include $(DEPS)

.PHONY: all clean run
