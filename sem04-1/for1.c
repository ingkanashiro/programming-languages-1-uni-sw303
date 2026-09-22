#include <stdio.h>

int main() {

    // Print the multiples of 3 in the first 25 positive integers
    printf("Múltiplos de 3:\n");
    const int UPPER_BOUND = 900;

    // A bit of a cursed implementation, but still perfectly fine

    int i = 1;
    for (;;) {
        if (i > UPPER_BOUND) break;

        if (i % 3 == 0) {
            printf("%d ", i);
        }

        i++;
    }
    
    // for (int i = 1; i <= UPPER_BOUND; i++) {
    //     if (i % 3 == 0) {
    //         printf("%d ", i);
    //     }
    // }

    printf("\n");
    return 0;
}