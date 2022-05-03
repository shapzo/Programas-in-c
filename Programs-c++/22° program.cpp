//Programa 12	
// Areas 
// Rodrigo Palma Garcia
#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
#define pi 3.1416
using namespace std;
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
main()
{
	float r,rp,b1,b2,h,r1,r2;
	int op;
	do {
		system("cls");
		gotoxy(25,2); cout<<"Formulas de areas";
		gotoxy(20,8); cout<<"1.-Circulo";
		gotoxy(20,10); cout<<"2.-Trapecio";
		gotoxy(20,12); cout<<"3.-Elipse";
		gotoxy(20,14); cout<<"4.-Salir";
		gotoxy(23,17); cout<<"Teclee el numero con la opcion deseada:";
		cin>>op;
		switch (op)
		{
			case 1:
				system("cls");
			gotoxy(30,5); cout<<"Area del circulo";
			gotoxy(20,8); cout<<"Teclee el radio:";
			cin>>r;
			rp=pow(r,2);
			gotoxy(23,11); cout<<"El area del circulo con radio "<<r<<" es:"<<(pi*rp);
			gotoxy(25,15); cout<<"Pulse una tecla para regresar al menu";
			getch();
			break;
				case 2:
				system("cls");
			gotoxy(30,5); cout<<"Area de un trapecio";
			gotoxy(20,8); cout<<"Teclee el valor de la primer base:";
			cin>>b1;
			gotoxy(20,10); cout<<"Teclee el valor de la segunda base:";
			cin>>b2;
			gotoxy(20,12); cout<<"Teclee la altura:";
			cin>>h;
			gotoxy(23,15); cout<<"El area del trapecio es:"<<(((b1+b2)/2)*h);
			gotoxy(25,19); cout<<"Pulse una tecla para regresar al menu";
			getch();
			break;
				case 3:
				system("cls");
			gotoxy(30,5); cout<<"Area de la elipse";
			gotoxy(20,8); cout<<"Teclee el valor del eje menor:";
			cin>>r1;
			gotoxy(20,10); cout<<"Teclee el valor del eje mayor:";
			cin>>r2;
			gotoxy(23,15); cout<<"El area de la elipse es:"<<(pi*r1*r2);
			gotoxy(25,19); cout<<"Pulse una tecla para regresar al menu";
			getch();
			break;
		}

	}
		while (op!=4);

}//fin del main
