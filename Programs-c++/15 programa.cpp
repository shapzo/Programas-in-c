#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void suma(float x, float y){
float suma=0;
suma=x+y;
cout<<"\n el resultado es: "<<suma;
}
void resta(float x, float y){
float resta=0;
resta=x-y;
cout<<"\n el resultado es: "<<resta;
}
void multiplicacion(float x, float y){
float multiplicacion=0;
multiplicacion=x*y;
cout<<"\n el resultado es: "<<multiplicacion;
}
void divicion(float x, float y){
float divicion=0;
divicion=x/y;
cout<<"\n el resultado es: "<<divicion;
}
main(){
float a,b;
cout<<"ingresa un numero: ";
cin>>a;
cout<<"ingresa otro numero: ";
cin>>b;
suma(a,b);
resta(a,b);
multiplicacion(a,b);
divicion(a,b);
getch();
}
