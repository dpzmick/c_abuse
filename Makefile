CC=gcc

all: abuse hello

abuse: abuse.c
	@$(CC) $^ -o $@

hello: hello.c
	@$(CC) -include lib.h $^ -o $@ -w

clean:
	-@rm abuse hello
