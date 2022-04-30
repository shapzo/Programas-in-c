#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *archivoop;
FILE *archivoout;

char NombreFichero[200];
char textoExtraido[61];
char textoMetido[100];

int i = 0, j, k;

float q, w[100], g[100], m[100];

float a, x, y, z, o, p, r;
float s = 0, h = 0;
int tmp;
int d;

int main()
{

   printf("ingresa el nombre del rchivo: ");
   scanf(" %s", NombreFichero);

   archivoop = fopen(NombreFichero, "r");

   if (archivoop == NULL)

      printf("Error abriendo el fichero");

   while (feof(archivoop) == 0)

   {
      fgets(textoExtraido, 61, archivoop);
      sscanf(textoExtraido, "%f", &q);
      w[i] = q;

      if ((i % 2 == 0))
      {
         /*para los numeros pares*/
         o = exp(q);
         p = cos(q);
         r = (o * p) / q;
      }
      else
      {
         /*para los numeros impares*/
         x = exp(q);
         y = sin(q);
         z = (x * y) / q;
      }
      g[i] = r;
      m[i] = z;
     

      i++;
   }

   i = i - 1;


   archivoout = fopen("salida.txt", "w+");
   fprintf(archivoout, "los numeros pares e impares son; los cosenos son: los cosenos son:\n");
   for (j = 0; j < i; j++)
   {
      fprintf(archivoout, "%.2f \n ", w[j]);
   }

   for (j = 0; j < i; j++)
   {
      fprintf(archivoout, "%.2f \n \t ", g[j]);
   }
   for (j = 0; j < i; j++)
   {
      fprintf(archivoout, "%.2f \n \t \t", m[j]);
   }

   fclose(archivoop);
   fclose(archivoout);

   return 0;
}
