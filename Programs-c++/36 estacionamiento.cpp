#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
system("color 02");
char arreglo[20]={'e','s','m','l','c','t','r','d','i','o','m','z','a','b','h','n','g','f','k','p'};
char *punteroarray=&arreglo[0];
cout<<"\n El valor es: "<<*punteroarray;
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=8;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=8;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=15;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=10;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=4;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
