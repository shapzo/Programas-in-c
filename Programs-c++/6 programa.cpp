#include<iostream>
#include<conio.h>
using namespace std;
main(){

int y,s,j;
char x[20];
cout<<"introduce el nombre del trabajador  :";
cin>>x;
cout<<"introduce su salario :";
cin>>y;

s=y*.08;
j=s+y;

cout<<"\n nombre del trabajador :"<<x;
cout<<"\n salario del tarbajador :"<<j;
getch();
}

