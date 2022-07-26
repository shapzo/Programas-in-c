/******************
 *
 * Program that calculates the volumes of geometric figures
 *
 * ****************/

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
		cout << "Volumes";
		gotoxy(20, 8);
		cout << "1.-Cylinder";
		gotoxy(20, 10);
		cout << "2.-Cone";
		gotoxy(20, 12);
		cout << "3.-Sphere";
		gotoxy(20, 14);
		cout << "4.-Octahedron";
		gotoxy(20, 16);
		cout << "5.-Exit";
		gotoxy(23, 19);
		cout << "Type the number with the desired option:";
		cin >> op;
		switch (op)
		{
		case 1:
			system("cls");
			gotoxy(30, 5);
			cout << "Cylinder volume";
			gotoxy(20, 8);
			cout << "Type the radius:";
			cin >> r;
			r2 = pow(r, 2);
			gotoxy(20, 10);
			cout << "Type the height:";
			cin >> h;
			gotoxy(23, 15);
			cout << "The volume of the cylinder with radius " << r << " is:" << (pi * r2 * h);
			gotoxy(25, 19);
			cout << "Press a key to return to the menu";
			getch();
			break;
		case 2:
			system("cls");
			gotoxy(30, 5);
			cout << "Volume of a cone";
			gotoxy(20, 8);
			cout << "Type the radius:";
			cin >> r;
			gotoxy(20, 10);
			cout << "Type the height:";
			cin >> h;
			r2 = pow(r, 2);
			gotoxy(23, 15);
			cout << "The volume of the cone is:" << ((pi * r2 * h) / 3);
			gotoxy(25, 19);
			cout << "Press a key to return to the menu";
			getch();
			break;
		case 3:
			system("cls");
			gotoxy(30, 5);
			cout << "Sphere volume";
			gotoxy(20, 8);
			cout << "Type the radius:";
			cin >> r;
			r3 = pow(r, 3);
			gotoxy(23, 15);
			cout << "The volume of the sphere is:" << ((4 * pi * r3) / 3);
			gotoxy(25, 19);
			cout << "Press a key to return to the menu";
			getch();
			break;
		case 4:
			system("cls");
			gotoxy(30, 5);
			cout << "Volume of the octahedron";
			gotoxy(20, 8);
			cout << "Type the value of (a):";
			cin >> a;
			oc = sqrt(2);
			es = pow(a, 3);
			gotoxy(23, 15);
			cout << "The volume of the octahedron is:" << ((oc / 3) * es);
			gotoxy(25, 19);
			cout << "Press a key to return to the menu";
			getch();
			break;
		}

	} while (op != 5);

} // fin del main
