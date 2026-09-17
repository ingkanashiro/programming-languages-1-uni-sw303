#include <stdio.h>

int main() {

    int year;
    scanf("%d", &year);

    bool isLeap = (
        (year % 4 == 0) && (!(year % 100 == 0) || (year % 400 == 0)) 
    );

    printf("year %d is leap? -> %b", year, isLeap);

    return 0;
}