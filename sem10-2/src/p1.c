#include <stdio.h>

int main() {

    FILE *file;
    char buffer[256];

    file = fopen("src/p1.c", "r");

    if (file == NULL) {
        fprintf(stderr, "error: couldn't open file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    printf("\n");
    
    fclose(file);

    return 0;
}