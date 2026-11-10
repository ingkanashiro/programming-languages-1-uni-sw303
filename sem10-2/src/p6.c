#include <stdio.h>

typedef struct {
    int code;
    char name[32];
    float average;
} Student;

int main() {

    FILE *file;
    Student e;

    file = fopen("util/students.dat", "wb");

    if (file == NULL) {
        fprintf(stderr, "error: couldn't open file.\n");
    }

    e.code = 1001;
    snprintf(e.name, sizeof(e.name), "Juan Perez");
    e.average = 18.5f;

    fwrite(&e, sizeof(e), 1, file); // save struct 1

    e.code = 1002;
    snprintf(e.name, sizeof(e.name), "Maria Lopez");
    e.average = 17.0f;

    fwrite(&e, sizeof(e), 1, file); // save struct 2

    fclose(file);
    printf("file created successfully!\n");

    return 0;
}