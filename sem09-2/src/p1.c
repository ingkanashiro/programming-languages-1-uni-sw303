#include <stdio.h>

int main() {

    int nums[5] = {10, 20, 30, 40, 50};
    int *ptr = nums;

    printf("nums -> %p\n\n", ptr);
    for (int i = 0; i < 5; i++) {
        printf("nums[%d] = %d\n", i, *(ptr + i));
    }
    printf("\nnums -> %p\n\n", ptr);

    return 0;
}