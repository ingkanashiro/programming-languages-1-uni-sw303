#include <stdio.h>

#define ROWS 5
#define COLUMNS 5

int main() {

    double matrix[ROWS][COLUMNS];

    for (size_t i = 0; i < ROWS; i++) for (size_t j = 0; j < COLUMNS; j++) {
        matrix[i][j] = 0.0;
    }




    // print matrix
    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < COLUMNS; j++) {
            printf("%lf\t", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}