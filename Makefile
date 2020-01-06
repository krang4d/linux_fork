all: fork

fork: main.c
	gcc -Wall -g -std=c99 -Werror main.c -o fork
