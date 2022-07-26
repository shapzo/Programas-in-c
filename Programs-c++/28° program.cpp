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

main(void)
{
	int lista[14] = {17, 21, 7, 3, 13, 20, 6, 4, 1, 18, 19, 25, 30, 5};
	int i;
	cout << "Original list \n";
	imprimirlista(lista, 14);
	ordintercambio(lista, 14);
	cout << endl
		 << "Ordered list" << endl;
	imprimirlista(lista, 14);
}
