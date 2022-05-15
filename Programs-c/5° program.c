/******************
 *
 * Program that opens a file, and calculates the cos sine and adds the output to a new file
 *
 * ****************/

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

   printf("Enter the file name: ");
   scanf(" %s", NombreFichero);

   archivoop = fopen(NombreFichero, "r");

   if (archivoop == NULL)

      printf("Error");

   while (feof(archivoop) == 0)

   {
      fgets(textoExtraido, 61, archivoop);
      sscanf(textoExtraido, "%f", &q);
      w[i] = q;

      if ((i % 2 == 0))
      {
         /*for even numbers*/
         o = exp(q);
         p = cos(q);
         r = (o * p) / q;
      }
      else
      {
         /*for odd numbers*/
         x = exp(q);
         y = sin(q);
         z = (x * y) / q;
      }
      g[i] = r;
      m[i] = z;

      i++;
   }

   i = i - 1;

   archivoout = fopen("output.txt", "w+r");
   fprintf(archivoout, "even and odd numbers are:   cosines are:    cosines are: \n");
   for (j = 0; j < i; j++)
   {
      fprintf(archivoout, "%.2f \n\t ", w[j]);
   }
   for (j = 0; j < i; j++)
   {
      fprintf(archivoout, "%.2f \n\t\t\t\t\t ", g[j]);
   }
   for (j = 0; j < i; j++)
   {
      fprintf(archivoout, "%.2f \n\t\t\t\t\t\t\t", m[j]);
   }

   fclose(archivoop);
   fclose(archivoout);

   return 0;
}
