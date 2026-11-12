#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {

    int month = 3;

    switch (month) {
        case JANUARY:
            printf("Month is JAN\n");
            break;
        case FEBRUARY:
            printf("Month is FEB\n");
            break;
        case MARCH:
            printf("Month is MAR\n");
            break;
        case APRIL:
            printf("Month is APR\n");
            break;
        case MAY:
            printf("Month is MAY\n");
            break;
        case JUNE:
            printf("Month is JUN\n");
            break;
        case JULY:
            printf("Month is JUL\n");
            break;
        case AUGUST:
            printf("Month is AUG\n");
            break;
        case SEPTEMBER:
            printf("Month is SEP\n");
            break;
        case OCTOBER:
            printf("Month is OCT\n");
            break;
        case NOVEMBER:
            printf("Month is NOV\n");
            break;
        case DECEMBER:
            printf("Month is DEC\n");
            break;    
    }


}