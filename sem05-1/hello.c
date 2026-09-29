#include <stdio.h>

#define CURRENT_YEAR 2026

#ifndef __linux__
#define __OS__ "Windows"
#else
#define __OS__ "Linux"
#endif

void hello();
int get_year();
void get_system();

int main() {

    // call function hello()
    hello();
    get_system();

    return 0;
}

/*
    Definition of function get_year()
    :: parameters : none
    :: output     : int
*/
int get_year() {
    return CURRENT_YEAR;
}

/*
    Definition of function hello()
    :: parameters : none
    :: output     : none (void)
*/
void hello() {
    printf("Bienvenidos a la clase de SW303 del año %d\n", get_year());
}

void get_system() {
    printf("El sistema operativo es %s\n", __OS__);
}