/******************
 *
 * Dynamic memory program
 *
 * ****************/

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
        printf("----------Dynamic memory program----------\n");
        printf("-----Enter the number of numbers to store-----\n");
        if (scanf("%d||%f", &a) == 1)
        {
            p = malloc(sizeof(int) * a); // Reserving memory for the number of integers desired
            for (i = 0; i < a; i++)
            {
                printf("Enter value %d :", i + 1);
                if (scanf("%d||%f", &p[i]) == 1)
                {
                }
                else
                {
                    /*
                    * uncomment if you are in windows, so that the cmd or powershell console changes color XD
                    * system("cls");
                    * and comment the line -> system("clear");
                    */
                    system("clear");
                    printf("\n\n\nError letters and decimal numbers are not supported\n\n");
                    seguir = 'n';
                    getchar();
                    scanf("%c", &seguir);
                }
            }

            for (i = 0; i < a; i++)
            {
                printf("\nValue [%d] in memory location %p: %d", i + 1, &p[i], p[i]);
            }

            getchar();
            printf("\n----press enter key to continue\n\n");
            scanf("%c", &seguir);

            printf("Enter the number of spaces you want to add\n\n");
            if (scanf("%d||%f", &x) == 1)
            {
            }
            else
            {
                system("clear");
                printf("\n\n\nError letters and decimal numbers are not supported\n\n");
                seguir = 'n';
                getchar();
                scanf("%c", &seguir);
            }

            s = a + x;
            p = (int *)realloc(p, sizeof(int) * s);
            for (i = a; i < s; i++)
            {
                printf("Enter value %d :", i + 1);
                if (scanf("%d||%f", &p[i]) == 1)
                {
                }
                else
                {
                    system("clear");
                    printf("\n\n\nError letters and decimal numbers are not supported\n\n");
                    seguir = 'n';
                    getchar();
                    scanf("%c", &seguir);
                };
            }

            for (i = 0; i < s; i++)
            {
                printf("Value [%d] in locality %p: %d\n", i + 1, &p[i], p[i]);
            }

            printf("\n\n\n-----next we will empty the memory-----\n\n\n\n");

            free(p);

            for (i = 0; i < s; i++)
            {
                printf("-----Release of location %p, current status: %p\n", &p[i], p[i]);
            }
            
            printf("\n-----You want to continue filling the memory press any key, if not press the (n) key:");
            getchar();
            scanf("%c", &seguir);
        }
        else
        {
            system("clear");
            printf("\n\n\nError letters and decimal numbers are not supported\n\n");
            seguir = 'n';
            getchar();
            scanf("%c", &seguir);
        }
    } while (seguir != 'n');

    return 0;
}