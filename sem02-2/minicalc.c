#include <stdio.h>

int main() {

    int num1, num2;

    printf("simple calc: enter two integers to operate\n");
    printf("------------------------------------------\n");
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    int sum = num1 + num2;
    int dif = num1 - num2;
    int mult = num1 * num2;

    float div;
    if (num2 == 0) {
        div = 0;
    }
    else {
        div = (float)num1 / num2;
    }

    printf("------------------------------------------\n");
    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, dif);
    printf("%d * %d = %d\n", num1, num2, mult);

    if (num2 == 0) {
        printf("%d / %d = cannot divide by zero\n", num1, num2);
    }
    else {
        printf("%d / %d = %.2f\n", num1, num2, div);
    }

    return 0;
}