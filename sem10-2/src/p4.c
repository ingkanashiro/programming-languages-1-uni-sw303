#include <stdio.h>

int main() {

    FILE *file;
    file = fopen("util/data.txt", "a"); // append mode, doesn't wipe data

    if (file == NULL) {
        fprintf(stderr, "couldn't create file.\n");
        return 1;
    }

    fprintf(file, "004,Carlos,15\n");
    fprintf(file, "005,Jose,17\n");

    fclose(file);

    printf("file created successfully!\n");

    return 0;
}