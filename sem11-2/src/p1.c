#include <stdio.h>

union Data {
    int as_int;     
    float as_float; 
    char as_char;   
};

int main() {

    printf("int occupies %d bytes\n", sizeof(int));
    printf("float occupies %d bytes\n", sizeof(float));
    printf("char occupies %d bytes\n", sizeof(char));

    printf("\nData occupies %d bytes\n", sizeof(union Data));

    union Data data;
    data.as_int = 120;

    printf("data : %d\n", data.as_int);
    printf("data : %f\n", data.as_float);

    data.as_float = 3.1416;

    printf("data : %d\n", data.as_int);
    printf("data : %f\n", data.as_float);

    return 0;
}