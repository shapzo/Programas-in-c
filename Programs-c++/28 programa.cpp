#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main(){
int arreglo[8]={0,30,70,10,99,2,17,5};
int *punteroarray=&arreglo[0];
punteroarray+=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=3;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
