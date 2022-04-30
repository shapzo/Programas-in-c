#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, x, y, z, o, p, q;
int d;
int main()
{

    printf("----------Programa k calcula una funcion----------\n");
    printf("Insgresa un numero en un intervalo de -30 al 30: \n");
    scanf("%f", &a);
    d = a;
    if ((d % 2 == 0))
    {
        printf("es par\n");
        /*para los numeros pares*/
        o = exp(a);
        p = cos(a);
        q = (o * p) / a;
        printf("\n el resultado es: %f", q);
    }
    else
    {
        printf("es impar\n");
        /*para los numeros impares*/
        x = exp(a);
        y = sin(a);
        z = (x * y) / a;
        printf("\n el resultado es: %f", z);
    }

    return 0;
}
