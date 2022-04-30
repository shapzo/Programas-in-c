#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
system("color 3b");
char arreglo[19]={'d','i','r','s','a','x','y','e','o','q','p','b','t','n','u','v','l','c','f'};
char *punteroarray=&arreglo[0];
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=10;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=10;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=15;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=15;
cout<<"\n El valor es : "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=4;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();

}
