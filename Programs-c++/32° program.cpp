#include <iostream>
#include <conio.h>
using namespace std;
void intercambio(int &x, int &y)
{
	int aux = x;
	x = y;
	y = aux;
}

void ordseleccion(int a[], int n)
{
	int indicemenor;
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		indicemenor = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[indicemenor])
				indicemenor = j;
		intercambio(a[i], a[indicemenor]);
	}
}

void imprimirlista(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "   " << endl;
	cout << endl;
}

main()
{
	int lista[20] = {100, 105, 120, 176, 187, 201, 456, 789, 182, 258, 772, 254, 221, 326, 321, 540, 478, 222, 852, 654};
	int i;
	cout << "lista original \n";
	imprimirlista(lista, 20);
	ordseleccion(lista, 20);
	cout << endl
		 << "lista ordenada" << endl;
	cout << endl;
	imprimirlista(lista, 20);
	getch();
}
