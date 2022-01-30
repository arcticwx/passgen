CC = gcc
OBJ = passgen

all: compile

compile:
	$(CC) -o $(OBJ) src/main.c