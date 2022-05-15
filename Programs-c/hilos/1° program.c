#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void potencia(int *argv)
{
	int z;
	printf("Thread 1, potencia\n", pthread_self());
	z = pow((argv[1]), (argv[2]));
	printf("Potencia %d\n", z);
	pthread_exit(NULL);
}

void division(int *argv)
{

	float w;
	printf("Thread 2, divicion\n", pthread_self());
	if (argv[2] == 0)
		printf("Operation cannot be performed\n");
	else
	{
		w = ((float)(argv[1])) / ((float)(argv[2]));
		printf("Divison: %.4f\n", w);
	}
	pthread_exit(NULL);
}

int main(int argc, char *argv[])
{

	int i, h[3], j[3];
	pthread_t th1, th2;
	if (argc <= 1)
	{
		printf("YOU MUST ENTER TWO NUMBERS");
		printf("\nExample: \n./threads 5 23\n");
	}

	else
	{
		for (i = 1; i < argc; i++){
			h[i] = atoi(argv[i]);
		}

		pthread_create(&th1, NULL, (void *)potencia, &h);
		pthread_create(&th2, NULL, (void *)division, &h);
		pthread_join(th1, NULL);
		pthread_join(th2, NULL);
	}
	return (0);
}
