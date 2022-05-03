
//Program 14
//Perimetro y area, ecuacion
//Rodrigo Palma Garcia	
#include<iostream> 
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	float b,a,c,p;
	int op;
	do{
		system ("cls");
		cout<<"Area y perimetro del triangulo, ecuacion"<<endl;
		cout<<"1.Area"<<endl;
		cout<<"2.Perimetro"<<endl;
		cout<<"3.Ecuacion"<<endl;
		cout<<"4.Salir"<<endl;
		cout<<"Teclea la opcion"<<endl;
		cin>>op;
		switch(op){
			case 1:
				system ("cls");
				cout<<"Area"<<endl;
				cout<<"Teclea el valor del primer lado"<<endl;
				cin>>a;
				cout<<"Teclea el valor del segundo lado"<<endl;
				cin>>b;
				cout<<"Teclea el valor del tercer lado"<<endl;
				cin>>c;
				p=(a+b+c)/2;
				cout<<"El area del triangulo es:"<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
				cout<<"Pulsa una tecla para salir"<<endl;
				getch();
				break;
				case 2:
				system ("cls");
				cout<<"Perimetro"<<endl;
				cout<<"Teclea el valor del primer lado"<<endl;
				cin>>a;
				cout<<"Teclea el valor del segundo lado"<<endl;
				cin>>b;
				cout<<"Teclea el valor del tercer lado"<<endl;
				cin>>c;
				cout<<"El perimetro es:"<<(a+b+c)/2<<endl;
				cout<<"pulsa una tecla para salir"<<endl;
				getch();
				break;
				case 3:
				system("cis");	
				cout<<"Evaluar la ecuacion"<<endl;
				cout<<"Teclea el valor de a"<<endl;
				cin>>a;
				cout<<"Teclea el valor de b"<<endl;
				cin>>b;
				cout<<"Teclea el valor de c"<<endl;
				cin>>c;
				cout<<"El valor de x1 es:"<<(-b-sqrt (pow(b,2)-4*a*c))/2*a<<endl;
				cout<<"El valor de x2 es:"<<(-b+sqrt (pow(b,2)-4*a*c))/2*a<<endl;
				cout<<"Pulsa una tecla para salir"<<endl;
				getch();
				break;
					}//Fin del switch
					}while (op!=4);
}//Fin del main
