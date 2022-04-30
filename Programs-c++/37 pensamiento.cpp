#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
system("color d1");
char arreglo[20]={'s','d','g','m','e','p','n','t','h','k','f','z','v','a','o','c','i','w','r','l'};
char *punteroarray=&arreglo[0];
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=13;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=10;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=13;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=12;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
