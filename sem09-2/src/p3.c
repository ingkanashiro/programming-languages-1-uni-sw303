#include <stdio.h>

/*  Nótese que en Linux, long int ocupa 8 bytes en vez de 4 bytes.
    También nótese que long long int = long int. */

int main() {
    long long int nums[5] = {10, 20, 30, 40, 50};

    for (long long int *ptr = nums; ptr < nums + 5; ptr++) {
        printf("value %ld in address %p\n", *ptr, ptr);
    }

    return 0;
}