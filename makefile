CC = gcc
EXECNAME = prog

SRC = \
main.c

all:
	$(CC) $(SRC) -o $(EXECNAME)