#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void intercambio(int &x, int &y)
{
	int aux = x;
	x = y;
	y = aux;
}

void ordinsercion(int a[], int n)
{
	int i, j, aux;
	for (i = 1; i < n; i++)
	{

		j = i;
		int aux = a[i];
		aux = a[i];
		while (j > 0 && aux < a[j - 1])
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = aux;
	}
}

void imprimirlista(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

main()
{
	system("color 5b");
	int lista[13] = {1, 4, 11, 15, 18, 55, 30, 21, 42, 39, 44, 98, 2};
	cout << endl
		 << "Original list \n"
		 << endl;
	imprimirlista(lista, 13);
	ordinsercion(lista, 13);
	cout << endl
		 << "Ordered list" << endl;
	imprimirlista(lista, 13);
	getch();
}
