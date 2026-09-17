#include <stdio.h>

unsigned int count(unsigned int num) {

    int counter = 0;
    while (num) {
        num &= (num - 1);
        counter++;
    }

    return counter;
}

int main() {

    unsigned int num = 0b1010100010101001;
    unsigned int q = count(num);

    printf("the number has %u ones\n", q);

    return 0;
}