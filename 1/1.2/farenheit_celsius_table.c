#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; integer version*/
// int main()
// {
//     int fahr, celsius;
//     int lower, upper, step;

//     lower = 0;      /* lower limit of temperature table */
//     upper = 300;    /* upper limit */
//     step = 20;      /* step size */

//     fahr = lower;
//     while (fahr <= upper) {
//         celsius = 5 * (fahr - 32) / 9;
//         printf("%3d %6d\n", fahr, celsius);
//         fahr = fahr + step;
//     }
// }

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version*/
// int main()
// {
//     float fahr, celsius;
//     float lower, upper, step;

//     lower = 0;      /* lower limit of temperature table */
//     upper = 300;    /* upper limit */
//     step = 20;      /* step size */

//     printf("Fahrenheit | Celsius\n");

//     fahr = lower;
//     while (fahr <= upper) {
//         celsius = (5.0 / 9.0) * (fahr - 32.0);
//         printf("%3.0f\t    %6.1f\n", fahr, celsius);
//         fahr = fahr + step;
//     }
// }

/* print Celsius-Fahrenheit table
    for fahr = 0, 20, ..., 300; floating-point version*/
int main()
{
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Celsius | Fahrenheit\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%3.0f\t    %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}