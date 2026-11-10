#include <stdio.h>

typedef struct {
    int code;
    char name[32];
    float average;
} Student;

int main() {

    FILE *file;
    Student e;

    file = fopen("util/students.dat", "rb");

    if (file == NULL) {
        fprintf(stderr, "error: couldn't open file.\n");
    }

    printf("LISTADO DE ESTUDIANTES\n");

    while (fread(&e, sizeof(Student), 1, file) == 1) {
        printf("\nEstudiante:\n");
        printf("\tCódigo   : %d\n", e.code);
        printf("\tNombre   : %s\n", e.name);
        printf("\tPromedio : %f\n", e.average);
    }

    printf("\n");

    if (ferror(file)) {
        fprintf(stderr, "error: file reading was interrupted.\n");
    }

    fclose(file);
    return 0;
}