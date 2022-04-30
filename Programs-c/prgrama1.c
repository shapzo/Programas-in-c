//programa 1 de la practica de tipos de sistemas operativos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *archivo;
FILE *archivos;

char NombreFichero[200];
char textoExtraido[61];
char len[250];
int v, i;
int t;
char resp;

void abrir_archivo()
{

   printf("ingresa el nombre del rchivo: ");
   scanf(" %s", NombreFichero);

   archivo = fopen(NombreFichero, "r");
   fgets(textoExtraido, 50, archivo);

   fgets(textoExtraido, 50, archivo);
   len = strlen(textoExtraido);

   for (i = 1; len <= 40; len++)
   {
      t = v % 2;
      if (t == 0)
         t = (exp(t) * sin(t)) / t;
      else
         t = (exp(t) * cos(t)) / t;
   }
   printf("\n el resultado es: %lf", q);

   archivos = fopen("salida.txt", "w+");
   fprintf(archivos, "kiubi beby\n");
   fprintf(archivos, "%s", t);

   fclose(archivo);
   fclose(archivos);
}

int main()
{
   system("clear");
   do
   {
      abrir_archivo();
      printf("\n------------Presione cualquier tecla para volver a hacerlo de lo contrario presione la tecla (n) minuscula----------");
      resp = getchar();
   } while (resp != 'n');

   return 0;
}
