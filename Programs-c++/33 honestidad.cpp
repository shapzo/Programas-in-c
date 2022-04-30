#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
system("color 8A");
char arreglo[18]={'n','a','b','p','a','i','t','r','k','h','e','d','w','m','l','c','s','o'};
char *punteroarray=&arreglo[0];
punteroarray+=9;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=8;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=17;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=10;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=10;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
