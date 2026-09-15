#include <stdio.h>

int main() {

    // Valores de prueba
    int a = 25, b = 7, c = 129;

    printf("\n===== OPERADORES ARITMÉTICOS =====\n");
    printf("La suma de %d + %d es %d\n", a, b, a + b);
    printf("La resta de %d - %d es %d\n", a, b, a - b);
    printf("La multiplicación de %d * %d es %d\n", a, b, a * b);
    printf("La división (entero) de %d / %d es %d\n", a, b, a / b);
    printf("La división (real) de %d / %d es %f\n", a, b, (float)a / b);
    printf("El resto (%%) de %d / %d es %d\n", a, b, a % b);
    
    printf("\n===== OPERADORES DE COMPARACIÓN =====\n");
    printf("(%d > %d)? devuelve %d\n", a, b, a > b);
    printf("(%d > %d)? devuelve %d\n", b, c, b > c);
    
    printf("(%d > %d y %d > %d)? devuelve %d\n", a, b, b, c, (a > b) && (b > c));
    printf("(%d > %d o %d > %d)? devuelve %d\n", a, b, b, c, (a > b) || (b > c));
    
    
    
    
    return 0;
}