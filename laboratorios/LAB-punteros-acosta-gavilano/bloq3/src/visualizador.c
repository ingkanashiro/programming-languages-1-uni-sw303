#include <stdio.h>

int main() {
  int v[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++) {
    printf("v[%d] = %d (0x%x) @ 0x%p\nbytes: \n", i, v[i], v[i], (void*)&v[i]);
  } return 0;
}