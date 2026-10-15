#include <stdio.h>

int ackermann(int m, int n) {

    static int counter = 0;
    int inner = counter;

    /*  NOTE:
    
        The 'inner' variable stores the original value of the counter BEFORE it actually counts.
        That way, only the first call sets inner = 0 (or false), so we can print the call count at the end of only the broader call.
    
        This is commented ONLY because I found it interesting and am somewhat proud of the solution lol
    */

    counter++;

    int r = 0;

    if (m == 0) {
        r = n + 1;
    } else if (m > 0 && n == 0) {
        r = ackermann(m-1, 1);
    } else if (m > 0 && n > 0) {
        r = ackermann(m-1, ackermann(m, n-1));
    } else {
        r = -1;
    }

    if (!inner) {
        printf("\nLlamadas: %d\n", counter);
    }   

    return r;
}

int main() {

    int a = 3, b = 4;
    int f = ackermann(3, 4);

    printf("Resultado: ackermann(%d, %d) = %d\n\n", a, b, f);

    return 0;
}