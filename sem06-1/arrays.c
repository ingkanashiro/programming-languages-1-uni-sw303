#include <stdio.h>

int main() {

    int array[5];

    printf("Dirección del arreglo: %p\n", array);
    for (size_t i = 0; i < 5; i++) {
        printf("\tDirección del elemento %d: %p\n", i, &array[i]);
    }

    return 0;
}