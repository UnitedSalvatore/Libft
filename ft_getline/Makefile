FILENAMES = ft_getline.c

SOURCES = $(addprefix ./, $(FILENAMES))
OBJECTS = $(addprefix ./obj/, $(FILENAMES:.c=.o))

CC = gcc
FLAGS ?= -Wall -Wextra -Werror
FLAGS += -I../include/

all: $(OBJECTS)

obj:
	mkdir obj/

obj/%.o: ./%.c | obj
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf obj/

re: clean all

.PHONY: all clean re
