#include <stdio.h>

int incrementKey() {
    static int key = 0;
    key++;

    return key;
}

int main() {

    printf("Registrando al alumno %d\n", incrementKey());
    printf("Registrando al alumno %d\n", incrementKey());
    printf("Registrando al alumno %d\n", incrementKey());
    printf("Registrando al alumno %d\n", incrementKey());
    printf("Registrando al alumno %d\n", incrementKey());
    printf("Registrando al alumno %d\n", incrementKey());
    printf("Registrando al alumno %d\n", incrementKey());
    printf("Registrando al alumno %d\n", incrementKey());

    return 0;
}