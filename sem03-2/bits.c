#include <stdio.h>

void printbin(unsigned char n) {
    for (int i = 7; i >= 0; i--) {
        putchar((n >> i) & 1 ? '1' : '0');
    }
    putchar('\n');
}


int main() {

    unsigned char a = 0b11001010;   // 202
    unsigned char b = 0b10110100;   // 180

    printf("a = "); printbin(a);
    printf("b = "); printbin(b);
    
    printf("a & b = ");     printbin(a & b);    // AND
    printf("a | b = ");     printbin(a | b);    // OR
    printf("~a = ");        printbin(~a);       // NOT
    printf("a ^ b = ");     printbin(a ^ b);    // XOR
    printf("a << 2 = ");    printbin(a << 2);   // Despl. izq.
    printf("a >> 2 = ");    printbin(a >> 2);   // Despl. der.

    return 0;
}