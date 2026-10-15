#include <stdio.h>
#include "racional.h"

static int is_prime(int n) {

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int mcd(int a, int b) {

    if (a < b) {
        int aux = a;
        a = b;
        b = aux;
    }

    if (b == 0) {
        return a;
    }
    else {
        return mcd(b, a % b);
    }

}

void simplify(int *num, int *den) {
    int div = mcd(*num, *den);

    printf("div = %d\n", div);

    *num = *num / div;
    *den = *den / div;
}

void sum(int n1, int d1, int n2, int d2, int *ndest, int *ddest) {
    *ndest = (n1 * d2) + (n2 * d1);
    *ddest = d1 * d2;

    simplify(ndest, ddest);
}