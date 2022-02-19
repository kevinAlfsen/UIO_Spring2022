# Which compiler to use
CC = gcc

# What compiler flags to use
CFLAGS =  -g -Wall -std=gnu11
CFLAGS += -Wextra

# Finds all source files (*.c)
SOURCES := $(shell find . -name '*.c')

# Evaluates to name of all object files (*.o)
OBJECTS := $(SOURCES:.c=.o)

# Directory for object files
# DIR := build
# OBJECTS := $(addprefix $(DIR), $(OBJECTS))

# Name of the final program
BINARY = bin

# 'all' is a phony target that build everything
all: $(BINARY)

# $(BINARY) depends on $(OBJECTS)
# meaning $(OBJECTS) must exist before the command below is run
$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^

# Wildcards here make all .o files depend on their .c equivalent
%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $^
# $@ is the same as target (%.o here)
# $^ is the same as all prerequisites (%.c here)

# Clean is a phony target used to remove all but the source files
clean:
	rm -rf $(BINARY) $(OBJECTS)