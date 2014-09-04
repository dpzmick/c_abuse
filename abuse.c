#include <stdio.h>
#include <stdlib.h>

void fancy_function( void * a ) {
    unsigned char * bytes = (unsigned char *) &a ;

    size_t i;
    for (i = 0; i < 8; i++) {
        printf("%d\n", bytes[i]);
    }
}

int main() {
    void * a = (void *) 0x0807060504030201;

    fancy_function(a);
}
