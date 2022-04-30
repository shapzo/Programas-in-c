#include<iostream>
#include<conio.h>
using namespace std;
main(){

int x,y;
cout<<"introduce un numero  :";
cin>>x;
cout<<"\n introduce un numero  :";
cin>>y;
if (y<x)
cout<<"el mayor es :"<<x;
else if (x<y)
cout<<"el mayor es :"<<y;
else if ((x=y) && (y=x))
cout<<" son iguales";
getch();
}
