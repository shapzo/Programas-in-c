#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
system("color 5b");
char arreglo[20]={'e','s','m','l','c','t','r','d','i','o','x','z','a','b','h','n','g','f','k','p'};
char *punteroarray=&arreglo[0];
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
