#include <stdio.h>
#define MAX_STUDENTS 5

int main() {

    char name[50];
    float score1, score2, score3, avg;

    printf("=== SISTEMA DE CALIFICACIONES ===\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {

        printf("* ESTUDIANTE %d\n", (i+1));
        while (getchar() != '\n');

        printf("\tNombre: ");
        fgets(name, sizeof(name), stdin);

        for (int j = 0; name[j] != '\000'; j++) {
            if (name[j] == '\n') {
                name[j] = '\000';
                break;
            }
        }

        printf("\tNotas: ");
        do { scanf("%f", &score1); } while (score1 < 0 || score1 > 100);
        do { scanf("%f", &score2); } while (score2 < 0 || score2 > 100);
        do { scanf("%f", &score3); } while (score3 < 0 || score3 > 100);

        avg = (float)(score1 + score2 + score3) / 3;
        char* status;

        if (avg >= 70) {
            status = "APROBADO";
        }
        else if (avg >= 50) {
            status = "RECUPERACIÓN";
        }
        else {
            status = "REPROBADO";
        }

        printf("+-------------------[ REPORTE DE NOTAS ]-------------------+\n");
        printf("| Nombre: %s\n", name);
        printf("| Notas: %.2f %.2f %.2f\n\n", score1, score2, score3);
        printf("| Promedio: %.3f (%s)\n", avg, status);
        printf("+----------------------------------------------------------+\n\n\n");
    }

    return 0;
}