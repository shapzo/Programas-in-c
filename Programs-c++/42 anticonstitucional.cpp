#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
system("color 8e");
char arreglo[12]={'c','a','t','n','l','e','m','o','n','i','u','s'};
char *punteroarray=&arreglo[0];
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=9;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=9;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=8;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=10;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=9;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=3;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
