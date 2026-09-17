#include <stdio.h>

int main() {

    int num1, num2;
    char* str1, str2;

    printf("num1: "); scanf("%d", &num1);
    printf("num2: "); scanf("%d", &num2);
    printf("str1: "); scanf("%s", str1);
    printf("str2: "); scanf("%s", str2);

    printf("=== RESULTADOS ===\n");
    printf("num1: %d, num2: %d, str1: %s, str2: %s", num1, num2, str1, str2);

    return 0;
}