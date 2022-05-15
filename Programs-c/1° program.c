/* *****************
 *
 * Program of addition, subtraction and module of memory vectors
 *
 * ****************/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int *p;
int *q;
int *w;
int *z;
int *m;

int i, d, x, s, a, j, f;
char seguir;
char resp;
char caracter;

void vector1()
{
	printf("----------1° vector---------\n");
	printf("-----Enter the number of numbers to store-----\n");
	if (scanf("%d||%f", &a) == 1)
	{

		p = (int *)malloc(a * sizeof(int)); // Reserving memory for the number of integers desired
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
				printf("\n\n\n Error letters and decimal numbers are not supported\n\n");
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
		printf("\n----press enter key to continue with the 2nd vector\n\n");
		scanf("%c", &seguir);
	}
}

void vector2()
{
	printf("----------2° Vector----------\n");
	printf("-----Enter the number of numbers to store-----\n");
	if (scanf("%d||%f", &a) == 1)
	{
		q = (int *)malloc(a * sizeof(int)); // Reserving memory for the number of integers desired
		for (i = 0; i < a; i++)
		{
			printf("Enter value %d :", i + 1);
			if (scanf("%d||%f", &q[i]) == 1)
			{
			}
			else
			{
				system("clear");
				printf("\n\n\n Error letters and decimal numbers are not supported\n\n");
				seguir = 'n';
				getchar();
				scanf("%c", &seguir);
			}
		}

		for (i = 0; i < a; i++)
		{
			printf("\nValue [%d] in memory location %p: %d", i + 1, &q[i], q[i]);
		}

		getchar();
		printf("\n----press the enter key to continue with the vector addition\n\n");
		scanf("%c", &seguir);
	}
}

void sum()
{
	printf("----------3° Vector---------\n");
	printf("-----sum of vectors 1 and 2-----\n");
	w = (int *)malloc(a * sizeof(int));
	for (i = 0; i < a; i++)
	{
		w[i] = p[i] + q[i];
	}

	FILE *archivo;
	if ((archivo = fopen("Vector Adittion.txt", "w+")) == NULL)
	{
		printf("File could not be opened");
	}
	else
	{
		fprintf(archivo, "%s", "\tResult of the sum of the vector 1 and 2 is: \n\n");
		for (i = 0; i < a; i++)
		{
			fprintf(archivo, "\t%d ", w[i]);
		}
		fclose(archivo);
	}

	for (i = 0; i < a; i++)
	{
		printf("\nValue [%d] in memory location %p: %d", i + 1, &w[i], w[i]);
	}

	printf("\n----press enter key to continue with the 4th vector\n\n");
	scanf("%c", &seguir);
}

void vector4()
{
	printf("----------4° Vector----------\n");
	printf("--------Enter the number of numbers to store-----\n");
	if (scanf("%d||%f", &a) == 1)
	{
		z = (int *)malloc(a * sizeof(int)); // Reserving memory for the number of integers desired
		for (i = 0; i < a; i++)
		{
			printf("Enter value %d :", i + 1);
			if (scanf("%d||%f", &z[i]) == 1)
			{
			}
			else
			{
				system("clear");
				printf("\n\n\n Error letters and decimal numbers are not supported\n\n");
				seguir = 'n';
				getchar();
				scanf("%c", &seguir);
			}
		}

		for (i = 0; i < a; i++)
		{
			printf("\nValue [%d] in memory location %p: %d", i + 1, &z[i], z[i]);
		}

		getchar();
		printf("\n-----press enter key to continue with the subtraction\n\n");
		scanf("%c", &seguir);
	}
}

void sub()
{
	printf("----------5° Vector----------\n");
	printf("-----Subtraction of vectors 3 and 4-----\n");
	m = (int *)malloc(a * sizeof(int));
	for (i = 0; i < a; i++)
	{

		m[i] = w[i] - z[i];
	}

	FILE *archivo2;
	if ((archivo2 = fopen("Vector Subtraction.txt", "w+")) == NULL)
	{
		printf("File could not be opened");
	}
	else
	{
		fprintf(archivo2, "%s", "\tResult of subtraction of vector sum (vector 3) and vector 4 is: \n\n");
		for (i = 0; i < a; i++)
		{
			fprintf(archivo2, "\t%d ", m[i]);
		}
		fclose(archivo2);
	}

	for (i = 0; i < a; i++)
	{
		printf("\nValue [%d] in memory location %p: %d", i + 1, &m[i], m[i]);
	}

	printf("\n-----press enter key to continue with the module\n\n");
	scanf("%c", &seguir);
}

void modulo()
{
	printf("---------6° Vector---------\n");
	printf("--------Modulus of the subtraction vector--------------\n");

	int f;
	f = 0;
	for (j = 0; j < a; j++)
	{
		f = f + (m[i] * m[i]);
	}

	float r;
	r = 0;
	r = sqrt(f);

	FILE *archivo3;
	if ((archivo3 = fopen("Modulus Vector.txt", "w+")) == NULL)
	{
		printf("File could not be opened");
	}
	else
	{
		fprintf(archivo3, "%s", "\tResult of the module is: \n\n");
		for (i = 0; i < a; i++)
		{
			fprintf(archivo3, "\t%.2f ", r);
		}
		fclose(archivo3);
	}

	printf("Press Enter to delete and continue.");
	getchar();

	if (remove("Modulus Vector.txt") == 0)
		printf("\n------The file Modulus Vector was deleted-----\n");
	else
	{
		printf("File could not be deleted\n");
	}

	printf("\n-----Press enter key to continue-----\n\n");
	scanf("%c", &seguir);
}

int main()
{
	system("clear");
	do
	{

		vector1();
		vector2();

		system("clear");

		sum();
		vector4();
		sub();

		system("clear");

		modulo();

		printf("\n----------Press any key to refill your memory otherwise press the lowercase (n) key----------\n");
		resp = getchar();
	} while (resp != 'n');

	free(p);
	free(q);
	free(w);
	free(z);
	free(m);

	return 0;
}
