#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
system("color bf");
char arreglo[18]={'o','r','m','x','i','l','k','y','a','b','h','z','r','p','d','b','q','t'};
char *punteroarray=&arreglo[0];
punteroarray+=10;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=9;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=13;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=17;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=9;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=2;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
