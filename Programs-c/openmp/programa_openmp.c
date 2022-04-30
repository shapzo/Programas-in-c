/**************************
 * programa que hace uso de la libreria openMP
 * equipo 1
 * tipos de sistemas operativos
 * ***********************/
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int i, q, n = 10, sum, multi;
int a[10];
char seguir;
int main()
{
    printf("-------Programa que suma y saca el producto de 10 numeros------\n");
    printf("------------Porfavor se le pide que tecle lo que se le pide--------------\n \n");
    for (i = 0; i < n; i++)
    {
        printf("Teclea el %d° numero: ", i);
        if (scanf("%d||%f", &a[i]) == 1)
        {
        }
        else
        {
            printf("\n\n\n error no se admiten letras y numeros decimales\n\n");
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

        printf("\nEn el hilo %d se ejecuto la suma, cuyo resultaod es: %d\n", omp_get_thread_num(), sum);
        printf("En el hilo %d se ejecuto el producto, cuyo resultado es: %d\n", omp_get_thread_num(), multi);
    }
    return 0;
}
