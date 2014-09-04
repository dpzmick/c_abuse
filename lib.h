#include<stdio.h>

// for hello
#define hello main(){
#define world write(1, "hello world\n", 13); }

// for maths
#define printf(str, a, b, c) printf("%d + %d = ", a, b); function(); printf("%d\n", a+b);
void function() {
    int a;
    int * lol = (void*)&a + 0x38;
    *lol += 1;
}
