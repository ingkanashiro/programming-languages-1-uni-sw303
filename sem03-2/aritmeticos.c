#include <stdio.h>

int main() {

    int a = 7, b = 2;
    printf("%d / %d (int) = %d\n", a, b, a / b);
    printf("%d / %d (f32) = %f\n\n", a, b, a / (float)b);
    printf("%d / %d (f32) = %f\n\n", a, b, (float)a / b);

    printf("-7 %% 2 = %d\n", -7 % 2);
    printf("7 %% -2 = %d\n\n", 7 % -2);

    int x = 10;
    x += 5; printf("x += 5 -> x = %d\n", x);
    x -= 3; printf("x -= 3 -> x = %d\n", x);
    x *= 2; printf("x *= 2 -> x = %d\n", x);
    x /= 4; printf("x /= 4 -> x = %d\n", x);
    x %= 4; printf("x %%= 4 -> x = %d\n", x);

    return 0;
}