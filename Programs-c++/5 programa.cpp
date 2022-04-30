#include<iostream>
#include<conio.h>
using namespace std;
main(){

int x,y,z;
cout<<"introduce un numero  :";
cin>>x;
cout<<"\n introduce un numero  :";
cin>>y;
cout<<"\n introduce un numero  :";
cin>>z;
if ((y<x) && (z<x))
cout<<"el mayor es :"<<x;
else if ((x<y) && (z<y))
cout<<"el mayor es :"<<y;
else if ((z<y) && (z<x))
cout<<"el mayor es :"<<z;
else if ((x=y) && (x=z) && (y=z));
cout<<" son iguales";
getch();
}
