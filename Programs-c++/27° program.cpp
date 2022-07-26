#include <iostream>
#include <conio.h>
using namespace std;
void intercambio(int &x, int &y)
{
	int aux = x;
	x = y;
	y = aux;
}

void ordintercambio(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] > a[j])
				intercambio(a[i], a[j]);
}

void imprimirlista(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "   " << endl;
}

main()
{
	int lista[6] = {7, 8, 9, 4, 6, 3};
	int i;
	cout << "Original list \n";
	imprimirlista(lista, 6);
	ordintercambio(lista, 6);
	cout << endl
		 << "Ordered list" << endl;
	imprimirlista(lista, 6);
}
