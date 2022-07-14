#include <stdio.h>

/* Write a program to print a histogram of the lengths
   of words in its input. It is easy to draw the histogram
   with the bars horizontal; a vertical orientation is more
   challenging.
*/

#define IN      1           /* inside a word */
#define OUT     0           /* outside a word */
#define WLEN    15          /* max length of a word */
#define ALEN    16          /* size of array representing word length frequencies */
int main()
{
    int c, state, i, j, len, mostfreq;
    int wlens[ALEN];

    for (i = 0; i < ALEN; ++i)
        wlens[i] = 0;

    state = OUT;
    len = mostfreq = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                state = OUT;
                if (len > WLEN)
                    len = WLEN;     /* floor the length to 15 */

                ++wlens[len-1];

                if (mostfreq < wlens[len-1])
                    mostfreq = wlens[len-1];

                len = 0;
            }
        }
        else {
            ++len;
            state = IN;
        }
    }

    /* print the histogram vertically */
    for (i = mostfreq; i > 0; --i) {
        printf("%3d |  ", i);
        for (j = 0; j < ALEN; ++j) {
            if (wlens[j] >= i)
                putchar('|');
            else
                putchar(' ');
            printf("  ");
        }
        putchar('\n');
    }

    printf("     ");
    for (i = 0; i < ALEN; ++i) {
        putchar(' ');
        printf("%2d", i + 1);
    }
    putchar('\n');

}