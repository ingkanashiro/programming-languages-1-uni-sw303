#include <stdio.h>

int main() {

    int num = 100;
    int *p = &num;
    int **pp = &p;

    printf("num %d at address %p\n", num, &num);     // &num = p
    printf("*p %d at address %p\n", *p, &p);         // &p = pp
    printf("**pp %d at address %p\n", **pp, &pp);    // &pp
    
    **pp = 200;
    printf("\nnew num = %d\n", num);

    return 0;
}