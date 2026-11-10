#include <stdio.h>

int main() {

    FILE *file;
    file = fopen("util/data.txt", "r+"); // read and write (file must exist)

    if (file == NULL) {
        fprintf(stderr, "couldn't create file.\n");
        return 1;
    }

    fseek(file, 0, SEEK_SET);
    fprintf(file, "XYZ"); //overwrites first 3 char

    fclose(file);

    printf("file created successfully!\n");

    return 0;
}