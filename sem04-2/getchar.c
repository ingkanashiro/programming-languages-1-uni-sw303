#include <stdio.h>
#include <unistd.h>
#include <termios.h>

// Simulates windows' getch() (somehow)
char getch() {
    struct termios old_opts, new_opts;
    char ch;

    tcgetattr(STDIN_FILENO, &old_opts);
    new_opts = old_opts;

    new_opts.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new_opts);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &old_opts);
    return ch;
}

int main() {

    // get char until hits 'q'

    for (;;) {

        char c = getch();
        
        if (c == 'q') {
            printf("\ncaught 'q' char, task ended.\n");
            break;
        }
        else {
            printf("caught: %c\n", c);
        }
    }

    return 0;
}