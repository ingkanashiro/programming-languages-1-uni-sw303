#include <stdio.h>

int main() {

    int num;
    do { scanf("%d", &num); } while (num < 0 || num > 9999);

    int d1, d2, d3, d4;
    d1 = num % 10; num /= 10;
    d2 = num % 10; num /= 10;
    d3 = num % 10; num /= 10;
    d4 = num % 10; num /= 10;

    printf("decomposed as [ %d %d %d %d ]\n\n", d4, d3, d2, d1);
    
    return 0;
}