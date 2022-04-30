#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main(){
int arreglo[12]={8,4,7,6,3,21,17,44,0,42,93,108};
int *punteroarray=&arreglo[0];
punteroarray+=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=4;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
