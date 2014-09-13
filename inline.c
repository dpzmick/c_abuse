// breaks with gcc-4.9 when compiled with O3 but is fine with O0

#include <stdio.h>
#include <stdlib.h>

void fun() {
    asm( "movl $1, %eax");
}

int __attribute__ ((noinline)) adder(int a, int b) {
    return a + b;
}

int main(int argc, const char *argv[])
{
    int a = atoi("10");
    int b = atoi("11");
    int sum = adder(a, b);

    fun();

    printf("%d + %d = %d\n", a, b, sum);

    return 0;
}
