#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main(){
int arreglo[10]={5,46,100,24,20,18,50,98,15,42};
int *punteroarray=&arreglo[0];
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=8;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=8;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=5;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
