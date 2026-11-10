#include <stdio.h>

int main() {

    FILE *file;
    file = fopen("util/students.txt", "w");

    if (file == NULL) {
        fprintf(stderr, "couldn't create file.\n");
        return 1;
    }

    fprintf(file, "001,Juan,18\n");
    fprintf(file, "002,Pedro,16\n");
    fprintf(file, "003,María,19\n");

    fclose(file);

    printf("file created successfully!\n");

    return 0;
}