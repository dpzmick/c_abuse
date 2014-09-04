#include<stdio.h>

void function() { int * a; *(int*)((void*)&a + 0x34) = -(~(*(int*)((void*)&a + 0x34))); }

int main(int argc, const char *argv[])
{
    int a = 2;
    int b = 2;
    printf("%d + %d = ", a, b);
    function();
    printf("%d\n", a+b);
}
