/******************
 *
 * Program that calculates functions
 *
 * ****************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, x, y, z, o, p, q;
int d;
int main()
{

    printf("----------Program that calculates a function----------\n");
    printf("Enter a number in a range from -30 to 30: \n");
    scanf("%f", &a);
    d = a;
    if ((d % 2 == 0))
    {
        printf("It's even number\n");
        /*for even numbers*/
        o = exp(a);
        p = cos(a);
        q = (o * p) / a;
        printf("\nThe result is: %f", q);
    }
    else
    {
        printf("It's odd number\n");
        /*for odd numbers*/
        x = exp(a);
        y = sin(a);
        z = (x * y) / a;
        printf("\nThe result is: %f", z);
    }

    getchar();
    return 0;
}
