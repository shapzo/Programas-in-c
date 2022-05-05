/******************
 *
 * program for trigonometric functions, sine, cosine and tangent
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
	float n;
	int op;
	do
	{
		system("cls");
		gotoxy(25, 2);
		cout << "Trigonometric functions";
		gotoxy(20, 8);
		cout << "1.-Sine";
		gotoxy(20, 10);
		cout << "2.-Cosine";
		gotoxy(20, 12);
		cout << "3.-Tangent";
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
			cout << "Sine function";
			gotoxy(20, 8);
			cout << "Type the value to calculate:";
			cin >> n;
			gotoxy(23, 11);
			cout << "The sine of " << n << " is:" << sin((n * pi) / 180);
			gotoxy(25, 15);
			cout << "Press a key to return to the menu";
			getch();
			break;
		case 2:
			system("cls");
			gotoxy(30, 5);
			cout << "Cosine function";
			gotoxy(20, 8);
			cout << "Type the value to calculate:";
			cin >> n;
			gotoxy(23, 11);
			cout << "The cosine of " << n << " is:" << cos((n * pi) / 180);
			gotoxy(25, 15);
			cout << "Press a key to return to the menu";
			getch();
			break;
		case 3:
			system("cls");
			gotoxy(30, 5);
			cout << "Tangent function";
			gotoxy(20, 8);
			cout << "Type the value to calculate:";
			cin >> n;
			gotoxy(23, 11);
			cout << "The tangent of " << n << " is:" << tan((n * pi) / 180);
			gotoxy(25, 15);
			cout << "Press a key to return to the menu";
			getch();
			break;
		}
	} while (op != 4);
}