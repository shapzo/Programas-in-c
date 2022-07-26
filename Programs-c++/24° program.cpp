#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	float b, a, c, p;
	int op;
	do
	{
		system("cls");
		cout << "Area and perimeter of the triangle, equation" << endl;
		cout << "1.Area" << endl;
		cout << "2.Perimetro" << endl;
		cout << "3.Ecuacion" << endl;
		cout << "4.Exit" << endl;
		cout << "Type the option" << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			system("cls");
			cout << "Area" << endl;
			cout << "Type the value of the first side" << endl;
			cin >> a;
			cout << "Type the value of the second side" << endl;
			cin >> b;
			cout << "Type the value of the third side" << endl;
			cin >> c;
			p = (a + b + c) / 2;
			cout << "The area of the triangle is:" << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
			cout << "Press a key to exit" << endl;
			getch();
			break;
		case 2:
			system("cls");
			cout << "Perimeter" << endl;
			cout << "Type the value of the first side" << endl;
			cin >> a;
			cout << "Type the value of the second side" << endl;
			cin >> b;
			cout << "Type the value of the third side" << endl;
			cin >> c;
			cout << "The perimeter is:" << (a + b + c) / 2 << endl;
			cout << "Press a key to exit" << endl;
			getch();
			break;
		case 3:
			system("cis");
			cout << "Evaluate the equation" << endl;
			cout << "Type the value of (a)" << endl;
			cin >> a;
			cout << "Type the value of (b)" << endl;
			cin >> b;
			cout << "Type the value of (c)" << endl;
			cin >> c;
			cout << "The value of x1 is:" << (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a << endl;
			cout << "The value of x2 is:" << (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a << endl;
			cout << "Press a key to exit" << endl;
			getch();
			break;
		}
	} while (op != 4);
}
