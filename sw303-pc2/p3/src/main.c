#include <stdio.h>
#include "racional.h"

int main() {

    int a, b, c, d, p, q;
    // calcularemos a/b + c/d = p/q

    printf("Ingrese la fracción 1 [num] [den]: ");
    scanf("%d %d", &a, &b);

    printf("Ingrese la fracción 2 [num] [den]: ");
    scanf("%d %d", &c, &d);

    sum(a, b, c, d, &p, &q);

    printf("\nResultado: %d/%d + %d/%d = %d/%d\n\n", a, b, c, d, p, q);
    return 0;
}