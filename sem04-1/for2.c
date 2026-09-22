#include <stdio.h>
#include <math.h>

int main() {

    const float ERR = 0.001f;

    for (float x = 5.0f; x > -5.0f; x -= 0.1f) {
        float y = x*x - 6*x + 9;

        if (fabs(y) < ERR) {
            printf("x ≈ %f\n", x);
        }
    }

    return 0;
}