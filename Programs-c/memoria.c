#include <stdio.h>
#include <stdlib.h>

int *p;
int i, d, x, s, a;
char seguir;

int main()
{

    int op;
    do
    {

        printf("--------Programa de memoria dinanmica--------------\n");
        printf("--------Ingrese la cantidad de numeros a almacenar:--------------\n");
        if (scanf("%d||%f", &a) == 1)
        {

            p = malloc(sizeof(int) * a); //Rservando memoria para la cantidad de enteros deseados
            for (i = 0; i < a; i++)
            {
                printf("Ingrese valor %d :", i + 1);
                if (scanf("%d||%f", &p[i]) == 1)
                {
                }
                else
                {

                    system("clear");
                    printf("\n\n\n error no se admiten letras y numeros decimales\n\n");
                    seguir = 'n';
                    getchar();
                    scanf("%c", &seguir);

                    getchar();
                    scanf("%c", &seguir);
                }
            }

            for (i = 0; i < a; i++)
            {
                printf("\nValor [%d] en localidad de memoria %p: %d", i + 1, &p[i], p[i]);
            }

            getchar();
            printf("\n--------presione una tecla para agregar mas datos: \n\n");
            scanf("%c", &seguir);

            printf("Ingrese la cantidad de espacios desea agregar\n\n");
            if (scanf("%d||%f", &x) == 1)
            {
            }
            else
            {

                system("clear");
                printf("\n\n\n error no se admiten letras y numeros decimales\n\n");
                seguir = 'n';
                getchar();
                scanf("%c", &seguir);

                getchar();
                scanf("%c", &seguir);
            }

            s = a + x;
            p = (int *)realloc(p, sizeof(int) * s);
            for (i = a; i < s; i++)
            {
                printf("Ingrese valor %d :", i + 1);
                if (scanf("%d||%f", &p[i]) == 1)
                {
                }
                else
                {

                    system("clear");
                    printf("\n\n\n error no se admiten letras y numeros decimales\n\n");
                    seguir = 'n';
                    getchar();
                    scanf("%c", &seguir);

                    getchar();
                    scanf("%c", &seguir);
                };
            }

            for (i = 0; i < s; i++)
            {
                printf("--------Valor [%d] en localidad %p: %d\n", i + 1, &p[i], p[i]);
            }

            printf("\n\n\n-----------------a continuacion vamos a vaciar la memoria-------------\n\n\n\n");

            free(p);

            for (i = 0; i < s; i++)
            {
                printf("--------Liberacion de localidad %p, estado actual: %p\n", &p[i], p[i]);
            }

            printf("\n--------Desea seguir llenando la memoria presione cualquier tecla, si no presione la tecla (n):");
            getchar();
            scanf("%c", &seguir);
        }
        else
        {

            system("clear");
            printf("\n\n\n error no se admiten letras y numeros decimales\n\n");
            seguir = 'n';
            getchar();
            scanf("%c", &seguir);

            getchar();
            scanf("%c", &seguir);
        }
    } while (seguir != 'n');

    return 0;
}