#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
system("color 3b");
char arreglo[21]={'b','r','c','h','m','g','x','f','o','t','d','k','a','j','q','s','e','l','z','i','n'};
char *punteroarray=&arreglo[0];
punteroarray+=16;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=6;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=12;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=17;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=14;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=17;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=15;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=15;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=11;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
return 0;
getch();
}
