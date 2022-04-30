#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    FILE *fp;                             // declaración puntero para obtener nuestras contantes del archivo
    FILE *fr;                             // declaración del puntero para escribir dentro del archivo los resultados
    float seno, coseno;                   // variables utilizadas
    int leido, i, j;                      // variables utilizas
    printf("ARREGLO DEL SENO Y COSENO "); // titulo de nuestro programa
    fp = fopen("archivo.txt", "r");       // apertura de nuestro archivo tiene el nombre archivo con la propiedad de lectura
    for (i = 0; i < 30; i++)
    {                   //  ciclo for para el llenado de la variable como son 30 necesita tener un ciclo que lea cada uno de ellos y los almacene dentro de leído
        if (fp == NULL) //probando la apertura y el llenado de la variable
        {
            printf("\nError de apertura del archivo. \n\n"); //en caso de no poder llenar mandara un mensaje y saldra
            exit(1);                                         //salida
        }
        else
        {
            fscanf(fp, "%d", &leido);                         // el llenado de la variable se hizo con la función fscanf y esta sirve para tener varibles de formato dentro de un archivo estas variables llevaran el nombre de leído
            printf("\n\tEl numero encontrado es: %d", leido); // imprime las diferentes variables encontradas
        }
    }
    fr = fopen("out.txt", "w+");   // se abre el siguiente archivo con el atributo de escritura
    if ((leido % 2 == 0))          //saca el modulo del numero si es cero es numero par si es diferente es impar
       { seno = sin(leido) / leido; //formula del cálculo para el seno
    
    
    fprintf(fr, "el resultado del seno del numero par es:,%d", seno); //el resultado lo va a guardar el archivo fp, porque esta apuntado sobre él y su atributo es la lectura
    }
    else
    {
        coseno = cos(leido) / leido;                                               //formula del cálculo para el coseno
        fprintf(fr, "el resultado del coseno del número impar es: %d \n", coseno); //el resultado lo va a guardar el archivo fp, porque esta apuntado sobre él y su atributo es la lectura
    }
    fclose(fr); //cerramos el archivo con el apuntador fr

    system("pause");
    return 0;
}