#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
system("color 24");
char arreglo[14]={'o','b','e','d','i','s','n','x','a','r','l','q','c','u'};
char *punteroarray=&arreglo[0];
punteroarray+=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=0;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=8;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=8;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=12;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
