// Programa 13
//  Volumenes
//  Rodrigo Palma Garcia

#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
#define pi 3.1416
using namespace std;
void gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
main()
{
	float r, h, ci, co, es, oc, a, r2, r3;
	int op;
	do
	{
		system("cls");
		r = 0;
		r2 = 0;
		h = 0;
		gotoxy(25, 2);
		cout << "Volumenes";
		gotoxy(20, 8);
		cout << "1.-Cilindro";
		gotoxy(20, 10);
		cout << "2.-Cono";
		gotoxy(20, 12);
		cout << "3.-Esfera";
		gotoxy(20, 14);
		cout << "4.-Octaedro";
		gotoxy(20, 16);
		cout << "5.-Salir";
		gotoxy(23, 19);
		cout << "Teclee el numero con la opcion deseada:";
		cin >> op;
		switch (op)
		{
		case 1:
			system("cls");
			gotoxy(30, 5);
			cout << "Volumen del cilindro";
			gotoxy(20, 8);
			cout << "Teclee el radio:";
			cin >> r;
			r2 = pow(r, 2);
			gotoxy(20, 10);
			cout << "Teclee la altura:";
			cin >> h;
			gotoxy(23, 15);
			cout << "El volument del cilindro con radio " << r << " es:" << (pi * r2 * h);
			gotoxy(25, 19);
			cout << "Pulse una tecla para regresar al menu";
			getch();
			break;
		case 2:
			system("cls");
			gotoxy(30, 5);
			cout << "Volumen de un cono";
			gotoxy(20, 8);
			cout << "Teclee el valor del radio:";
			cin >> r;
			gotoxy(20, 10);
			cout << "Teclee el valor de la altura:";
			cin >> h;
			r2 = pow(r, 2);
			gotoxy(23, 15);
			cout << "El volumen del cono es:" << ((pi * r2 * h) / 3);
			gotoxy(25, 19);
			cout << "Pulse una tecla para regresar al menu";
			getch();
			break;
		case 3:
			system("cls");
			gotoxy(30, 5);
			cout << "Volumen de la esfera";
			gotoxy(20, 8);
			cout << "Teclee el valor del radio:";
			cin >> r;
			r3 = pow(r, 3);
			gotoxy(23, 15);
			cout << "El volumen de la esfera es:" << ((4 * pi * r3) / 3);
			gotoxy(25, 19);
			cout << "Pulse una tecla para regresar al menu";
			getch();
			break;
		case 4:
			system("cls");
			gotoxy(30, 5);
			cout << "Volumen del octaedro";
			gotoxy(20, 8);
			cout << "Teclee el valor de a:";
			cin >> a;
			oc = sqrt(2);
			es = pow(a, 3);
			gotoxy(23, 15);
			cout << "El volumen del octaedro es:" << ((oc / 3) * es);
			gotoxy(25, 19);
			cout << "Pulse una tecla para regresar al menu";
			getch();
			break;
		}

	} while (op != 5);

} // fin del main
