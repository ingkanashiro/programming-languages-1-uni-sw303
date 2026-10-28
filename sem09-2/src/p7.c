#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("invalid input\n");
        return 1;
    }

    int *ptr = malloc((size_t)n * sizeof(*ptr));
    if (ptr == NULL) {
        printf("not enough memory\n");
        return 2;
    }

    for (int i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 10;
    }

    // print
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    return 0;
}