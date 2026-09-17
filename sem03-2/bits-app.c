#include <stdio.h>

int main() {

    unsigned char flags = 0;
    #define BIT(n) (1u << (n));

    flags |= BIT(2);
    flags |= BIT(5);


}