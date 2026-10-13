#include <stdio.h>

#define MAX_ROWS 4
#define MAX_COLS 4

void initialise(int (*matrix)[MAX_COLS]) {
    for (size_t i = 0; i < MAX_ROWS; i++) for (size_t j = 0; j < MAX_COLS; j++) {
        matrix[i][j] = 0;
    }
}

void printmtx(int (*matrix)[MAX_COLS]) {
    for (size_t i = 0; i < MAX_ROWS; i++) {
        for (size_t j = 0; j < MAX_COLS; j++) {
            printf("\t%d", matrix[i][j]);
        }   

        printf("\n");
    }
    
    printf("\n");
}

int main() {

    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };

    initialise(matrix1);
    
    printf("Matrix 1:\n");
    printmtx(matrix1);

    printf("Matrix 2:\n");
    printmtx(matrix2);
    
    initialise(matrix2);
    
    printf("Matrix 2 (ini):\n");
    printmtx(matrix2);

    return 0;
}