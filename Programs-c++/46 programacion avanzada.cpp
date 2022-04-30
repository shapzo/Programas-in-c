#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){                  
system("color 3b");   
char arreglo[25]={'u','t','i','l','y','z','v','s','e','q','n','k','j','a','d','p','o','f','m','g','h','c','r','b','t'};
char *punteroarray=&arreglo[0];
punteroarray+=15;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=9;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=8;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=19;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=14;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=7;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=8;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray++;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
return 0;
getch();
}

