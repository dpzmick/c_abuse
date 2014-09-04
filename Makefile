CC=gcc

all: abuse hello math

abuse: abuse.c
	@$(CC) $^ -o $@

hello: hello.c
	@$(CC) -include lib.h $^ -o $@ -w

math: math.c
	@$(CC) -include lib.h $^ -o $@

clean:
	-@rm abuse hello maths
