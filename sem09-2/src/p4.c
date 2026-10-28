#include <stdio.h>

/*  Incongruencia entre tipos de puntero
    (char*) imcompatible con (int*) */

int main() {
    long long int nums[5] = {10, 20, 30, 40, 50};

    printf("mem @ %p:\n\n", nums);
    int i = 0;
    for (char *ptr = (char*)nums; ptr < nums + 5; ptr++) {
        printf("%02X ", *ptr);

        i++;
        if (i >= 8) {
            i = 0;
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}