#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main(){
int arreglo[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
int *punteroarray=&arreglo[0];
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray-=4;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=5;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray+=2;
cout<<"\n El valor es: "<<*punteroarray;
punteroarray--;
cout<<"\n El valor es: "<<*punteroarray;
getch();
return 0;
}
