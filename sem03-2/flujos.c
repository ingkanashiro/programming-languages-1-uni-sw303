#include <stdio.h>

int main() {

    fprintf(stdout, "normal output from terminal\n");
    fprintf(stderr, "error output from terminal\n");

    // executing as './flujos > [dest_stdout] 2> [stderr]'

    return 0;
}