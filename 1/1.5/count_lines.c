#include <stdio.h>

/* count lines in input */
int main()
{
    int c, nl, nb, nt;

    nl = 0;
    nb = 0;
    nt = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;

        /* Exercise 1-8: Write a program to count blanks, tabs and newlines */
        if (c == ' ')
            ++nb;

        if (c == '\t')
            ++nt;
    }

    printf("# New Lines: %d\n", nl);
    printf("# Blanks: %d\n", nb);
    printf("# Tabs: %d\n", nt);
}