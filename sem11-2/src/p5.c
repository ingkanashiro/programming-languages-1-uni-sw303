#include <stdio.h>

typedef struct Configuration {
    unsigned int flag : 1;
    unsigned int level : 3;
    unsigned int mode : 2;
    unsigned int priority : 4;
} config;

int main() {

    config c1;
    c1.flag = 1; // values outside the range overflow

    printf("flag  : %d\n", c1.flag);
    printf("\nconfig occupies %d bytes\n\n", sizeof(c1));

    return 0;
}