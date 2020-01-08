TARGETS = fork0 execDemo helloExec selfExec
CFLAGS = -Wall -g -std=c99 -Werror

all: clean $(TARGETS)

$(TARGETS):
	gcc $(CFLAGS) $@.c -o $@

.PHONY: clean
clean:
	rm -f $(TARGETS) 
