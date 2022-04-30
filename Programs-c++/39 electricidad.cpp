#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
system("color 9c");
char arreglo[19]={'g','m','e','p','n','t','d','h','k','f','z','v','a','o','c','i','w','r','l'};
char *punteroarray=&arreglo[0];
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=16;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=16;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=12;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=9;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=12;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=9;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=6;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
