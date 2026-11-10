#include <stdio.h>

int main() {

    FILE *file;
    char *path = "src/p2.c";

    file = fopen(path, "r");

    if (file == NULL) {
        fprintf(stderr, "error: couldn't open file");
        return 1;
    }

    int c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }

    printf("\n");

    fclose(file);
    return 0;
}