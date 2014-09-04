CC=gcc

all: abuse hello math inline

abuse: abuse.c
	$(CC) $^ -o $@

hello: hello.c
	-@$(CC) -include lib.h $^ -o $@ -w

math: math.c
	$(CC) $^ -o $@

inline: inline.c
	$(CC) $^ -o working_$@
	$(CC) $^ -O3 -o broken_$@

clean:
	-@rm abuse hello math
