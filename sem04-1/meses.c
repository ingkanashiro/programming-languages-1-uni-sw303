#include <stdio.h>

int main() {

    int month, days;
    scanf("%i", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    }
    else if (month == 2) {
        days = 28;
    }
    else if (month > 0 && month < 13) {
        days = 30;
    }
    else {
        days = 0;
    }

    printf("El mes %d tiene %d días\n", month, days);

    /* >>> SUBOPTIMAL IMPLEMENTATION <<<

    switch (month) {
        case 1:
            printf("Enero tiene 31 días\n");
            break;    
        case 2:
            printf("Febrero tiene 28 días\n");
            break;
        case 3:
            printf("Marzo tiene 31 días\n");
            break;
        case 4:
            printf("Abril tiene 30 días\n");
            break;
        case 5:
            printf("Mayo tiene 31 días\n");
            break;
        case 6:
            printf("Junio tiene 30 días\n");
            break;
        case 7:
            printf("Julio tiene 31 días\n");
            break;
        case 8:
            printf("Agosto tiene 31 días\n");
            break;
        case 9:
            printf("Septiembre tiene 30 días\n");
            break;
        case 10:
            printf("Octubre tiene 31 días\n");
            break;
        case 11:
            printf("Noviembre tiene 30 días\n");
            break;
        case 12:
            printf("Diciembre tiene 31 días\n");
            break;
    }

    */

    return 0;
}