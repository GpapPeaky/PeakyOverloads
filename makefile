CC = gcc -ftrivial-auto-var-init=zero
EXECNAME = prog

SRC = \
main.c

all:
	$(CC) $(SRC) -o $(EXECNAME)