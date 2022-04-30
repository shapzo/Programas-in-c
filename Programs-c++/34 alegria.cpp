#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
system("color 6A");
char arreglo[8]={'r','g','a','b','h','l','e','i'};
char *punteroarray=&arreglo[0];
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=5;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
