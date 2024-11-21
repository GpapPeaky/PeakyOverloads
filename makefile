CC = gcc
EXECNAME = prog

SRC = \
POL_List.c \
main.c

all:
	$(CC) $(SRC) -o $(EXECNAME)