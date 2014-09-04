CC=gcc

all: abuse hello math inline

abuse: abuse.c
	@$(CC) $^ -o $@

hello: hello.c
	@$(CC) -include lib.h $^ -o $@ -w

math: math.c
	@$(CC) -include lib.h $^ -o $@

inline: inline.c
	@$(CC) $^ -o working_inline
	@$(CC) $^ -O3 -o broken_inline

clean:
	-@rm abuse hello math
