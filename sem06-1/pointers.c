#include <stdio.h>

int main() {

    int *ptr;
    int quantity = 200;

    ptr = NULL;
    printf("%p\n", ptr);

    // foo, bar, biz, qux...

    if (ptr == NULL) {
        ptr = &quantity;
        printf("El puntero fue asignado a la dirección %p, con un valor de %d\n", ptr, *ptr);
    }
    else {
        printf("El puntero ya estaba inicializado\n");
    }


    return 0;
}