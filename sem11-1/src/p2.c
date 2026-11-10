#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int code;
    char *name;
    int age;
};

void printstruct(struct Student s) {
    printf("\n\nCódigo : %d\n", s.code);
    printf("Nombre : %s\n", s.name);
    printf("Edad   : %d\n", s.age);
}

int main() {

    struct Student *ptr;
    ptr = NULL;

    ptr = (struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL) {
        fprintf(stderr, "error: out of memory\n");
        return 1;
    }

    ptr->code = 9999;
    strcpy(ptr->name, "Abel");
    ptr->age = 22;

    printstruct(*ptr);

    free(ptr);

    return 0;
}