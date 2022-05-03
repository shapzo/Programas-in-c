//Programa 11	
// Funciones trigonometricas
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
	float n;
	int op;
	do {
		system("cls");
		gotoxy(25,2); cout<<"Funciones trigonometricas";
		gotoxy(20,8); cout<<"1.-Seno";
		gotoxy(20,10); cout<<"2.-Coseno";
		gotoxy(20,12); cout<<"3.-Tangente";
		gotoxy(20,14); cout<<"4.-Salir";
		gotoxy(23,17); cout<<"Teclee el numero con la opcion deseada:";
		cin>>op;
		switch (op)
		{
			case 1:
				system("cls");
			gotoxy(30,5); cout<<"Funcion seno";
			gotoxy(20,8); cout<<"Teclee el valor a calcular:";
			cin>>n;
			gotoxy(23,11); cout<<"El seno de "<<n<<" es:"<<sin((n*pi)/180);
			gotoxy(25,15); cout<<"Pulse una tecla para regresar al menu";
			getch();
			break;
				case 2:
				system("cls");
			gotoxy(30,5); cout<<"Funcion coseno";
			gotoxy(20,8); cout<<"Teclee el valor a calcular:";
			cin>>n;
			gotoxy(23,11); cout<<"El coseno de "<<n<<" es:"<<cos((n*pi)/180);
			gotoxy(25,15); cout<<"Pulse una tecla para regresar al menu";
			getch();
			break;
				case 3:
				system("cls");
			gotoxy(30,5); cout<<"Funcion tangente";
			gotoxy(20,8); cout<<"Teclee el valor a calcular:";
			cin>>n;
			gotoxy(23,11); cout<<"La tangente de "<<n<<" es:"<<tan((n*pi)/180);
			gotoxy(25,15); cout<<"Pulse una tecla para regresar al menu";
			getch();
			break;
		}

	}
		while (op!=4);

}//fin del main
