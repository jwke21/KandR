#include <stdio.h>

/* Write a program to copy its input to its output,
   replacing each string of one or more blanks by a
   single blank */

#define NONBLANK '_'

int main()
{
    int c, prev_c;

    prev_c = NONBLANK;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {

            if (prev_c != ' ') {
                putchar(c);
            }

        } else {
            putchar(c);
        }

        prev_c = c;
    }
}
