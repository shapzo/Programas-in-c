#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main(){
int arreglo[11]={1,3,5,4,7,8,9,10,6,11,12};
int *punteroarray=&arreglo[0];
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=3;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=10;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=4;
cout<<"\n El valor es: "<<*punteroarray;
return 0;
getch();
}
