#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main(){
int arreglo[14]={1,0,5,6,8,9,10,12,14,16,17,26,30,40};
int *punteroarray=&arreglo[0];
punteroarray+=12;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=12;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=10;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=12;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=8;
cout<<"\n El valor es: "<<*punteroarray;
getch();
return 0;
}
