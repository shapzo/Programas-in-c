/**************************
 *
 * Program that adds and takes the product of 10 numbers *
 *
 * ***********************/

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int i, q, n = 10, sum, multi;
int a[10];
char seguir;
int main()
{
    printf("-------Program that adds and takes the product of 10 numbers------\n");
    for (i = 0; i < n; i++)
    {
        printf("Type the %d number: ", i);
        if (scanf("%d||%f", &a[i]) == 1)
        {
        }
        else
        {
            printf("\n\n\nerror letters and decimal numbers are not allowed\n\n");
            seguir = 'n';
            getchar();
            scanf("%c", &seguir);

            getchar();
            scanf("%c", &seguir);
        }
    }
    sum = a[0];
    multi = a[0];

#pragma omp parallel
    {
#pragma omp for
        for (i = 0; i < n; i++)
            sum = sum + a[i];

#pragma omp for
        for (i = 0; i < n; i++)
            multi = multi * a[i];

        printf("\nIn the thread %d the sum was executed, whose result is: %d\n", omp_get_thread_num(), sum);
        printf("In thread %d the product was executed, whose result is: %d\n", omp_get_thread_num(), multi);
    }
    return 0;
}
