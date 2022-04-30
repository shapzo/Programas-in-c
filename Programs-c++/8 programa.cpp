#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main(){
int a,b,c;
cout<<"tecle el salario del tarabajador: ";
cin>>a;
if (a>2500)
b=a*.03;
cout<<"el salario es: "<<b;
if (a<2500)
c=a*.09;
cout<<"el salario es: "<<c;
getch();
}
