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

int main()
{
	int lista[15] = {30, 35, 21, 1, 4, 6, 8, 3, 11, 22, 10, 21, 30, 10, 15};
	int i;
	cout << "Original list \n";
	imprimirlista(lista, 15);
	ordseleccion(lista, 15);
	cout << endl
		 << "Ordered list" << endl;
	cout << endl;
	imprimirlista(lista, 15);
	getch();
}
