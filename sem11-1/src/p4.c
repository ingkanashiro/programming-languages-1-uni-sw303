#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

int main() {

    struct Node *LIST;
    struct Node *HEAD = NULL;

    // first element
    LIST = malloc(sizeof(struct Node));

    if (LIST != NULL) {
        LIST->value = 10;
        LIST->next = NULL;
    }
    else {
        fprintf(stderr, "error: out of memory\n");
        return 2;
    }

    // second element
    HEAD = LIST;
    HEAD->next = malloc(sizeof(struct Node));

    if (HEAD->next != NULL) {
        HEAD = HEAD->next;

        HEAD->value = 20;
        HEAD->next = NULL;
    }
    else {
        fprintf(stderr, "error: out of memory\n");
        return 2;
    }

    // third element
    HEAD->next = malloc(sizeof(struct Node));

    if (HEAD->next != NULL) {
        HEAD = HEAD->next;

        HEAD->value = 30;
        HEAD->next = NULL;
    }
    else {
        fprintf(stderr, "error: out of memory\n");
        return 2;
    }

    HEAD = LIST;
    while (HEAD != NULL) {
        printf("value : %d\n", HEAD->value);
        HEAD = HEAD->next;
    }
    
    printf("\n\nfreeing up...\n\n");
    // free space
    HEAD = LIST;
    while (HEAD != NULL) {
        printf("value : %d\n", HEAD->value);
        struct Node *aux;

        aux = HEAD;
        HEAD = HEAD->next;
    
        free(aux);
    }

    return 0;
}