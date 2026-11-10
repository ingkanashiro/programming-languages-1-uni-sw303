#include <stdio.h>

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

    struct Student a1 = {
        999,
        "Abel",
        18
    };

    struct Student a2 = {
        .code = 200,
        .age = 19
    };

    printstruct(a1);
    printstruct(a2);

    return 0;
}