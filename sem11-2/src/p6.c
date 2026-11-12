#include <stdio.h>
#include <math.h>   // requires flag -lm

double ssin(double x) {
    return sin(x);
}

double ballistic(double x) {
    return -x * x;
}

// void graph(double L, double U) {
//     for (double dx = L; dx < U; dx += 0.1) {
//         wave(dx); // doesn't graph, just returns values that we don't even use yet lol
//     }
// }

void graph(double L, double U, double (*fn)(double)) {
    for (double dx = L; dx < U; dx += 0.1) {
        fn(dx);
    }
}

int main() {

    graph(-3.14, 3.14, ssin);
    graph(0, 25, ballistic);
    
    return 0;
}