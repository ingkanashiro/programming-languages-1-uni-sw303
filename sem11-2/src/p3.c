#include <stdio.h> 

enum Status {
    REGISTERED,
    PAID,
    COMPLETED,
    DELIVERED,
    CANCELLED
};

struct Order {
    int number;
    float price;
    enum Status status;
};

int main() {
    struct Order p = {
        1001,
        250.50,
        COMPLETED
    };

    printf("order  : %d\n", p.number);
    switch (p.status) {
        case REGISTERED:
            printf("status : REGISTERED\n");
            break;

        case PAID:
            printf("status : PAID\n");
            break;

        case COMPLETED:
            printf("status : COMPLETED\n");
            break;

        case DELIVERED:
            printf("status : DELIVERED\n");
            break;

        case CANCELLED:
            printf("status : CANCELLED\n");
            break;
    } 

    return 0;
}