/******************
 *
 * Program that calculates the area of a circle, trapezoid and ellipse
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
	float r, rp, b1, b2, h, r1, r2;
	int op;
	do
	{
		system("cls");
		gotoxy(25, 2);
		cout << "Formulas";
		gotoxy(20, 8);
		cout << "1.-Circle";
		gotoxy(20, 10);
		cout << "2.-Trapezoid";
		gotoxy(20, 12);
		cout << "3.-Ellipse";
		gotoxy(20, 14);
		cout << "4.-Exit";
		gotoxy(23, 17);
		cout << "Type the number with the desired option:";
		cin >> op;
		switch (op)
		{
		case 1:
			system("cls");
			gotoxy(30, 5);
			cout << "Circle area";
			gotoxy(20, 8);
			cout << "Type the radius:";
			cin >> r;
			rp = pow(r, 2);
			gotoxy(23, 11);
			cout << "The area of the circle with radius " << r << " is:" << (pi * rp);
			gotoxy(25, 15);
			cout << "Press a key to return to the menu";
			getch();
			break;
		case 2:
			system("cls");
			gotoxy(30, 5);
			cout << "Area of a trapezoid";
			gotoxy(20, 8);
			cout << "Type the value of the first base:";
			cin >> b1;
			gotoxy(20, 10);
			cout << "Type the value of second base:";
			cin >> b2;
			gotoxy(20, 12);
			cout << "Type the height:";
			cin >> h;
			gotoxy(23, 15);
			cout << "The area of the trapezoid is:" << (((b1 + b2) / 2) * h);
			gotoxy(25, 19);
			cout << "Press a key to return to the menu";
			getch();
			break;
		case 3:
			system("cls");
			gotoxy(30, 5);
			cout << "Ellipse area";
			gotoxy(20, 8);
			cout << "Key in the value of the minor axis:";
			cin >> r1;
			gotoxy(20, 10);
			cout << "Key in the value of the major axis:";
			cin >> r2;
			gotoxy(23, 15);
			cout << "The area of the ellipse is:" << (pi * r1 * r2);
			gotoxy(25, 19);
			cout << "Press a key to return to the menu";
			getch();
			break;
		}
	} while (op != 4);
}