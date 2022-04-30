#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void cubo(float x){
float cubo=0;
cubo=pow(x,3);
}
void cuadrado(float x){
float cuadrado=0;
cuadrado=pow(x,2);
}
void raiz(float x){
float raiz=0;
raiz=sqrt(x);
}
main(){
int a;
cout<<"ingrasa un nunero: ";
cin>>a;
cout<<"el numero al cubo es: "<<cubo(a);
cout<<"el numero al cuadrado es: "<<cuadrado(a);
cout<<"el numero al su raiz es: "<<raiz(a);
getch();
}
