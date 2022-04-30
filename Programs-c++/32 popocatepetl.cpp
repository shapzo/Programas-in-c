#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

main(){
	system("color 9A");
	char arreglo [15]={'a','b','p','a','t','r','k','h','e','w','l','c','s','o'};
	char *punteroarray =& arreglo [0];
	
     punteroarray+=2;
	 cout<<"\n el valor es: "<<*punteroarray;
	 punteroarray+=11;
	 cout<<"\n el valor es: "<<*punteroarray;
	 punteroarray -=11;
	 cout<<"\n el valor es: "<<*punteroarray;
	 punteroarray +=11;
	 cout<<"\n el valor es: "<<*punteroarray;
	 punteroarray -=2;
	 cout<<"\n el valor es: "<<*punteroarray;
	 punteroarray -=8;
	 cout<<"\n el valor es: "<<*punteroarray;
	 punteroarray ++;
	 cout<<"\n el valor es: "<<*punteroarray;
	 punteroarray +=4;
	 cout<<"\n el valor es: "<<*punteroarray;
	 punteroarray -=6;
	 cout<<"\n el valor es: "<<*punteroarray;
	 punteroarray +=6;
	 cout<<"\n el valor es: "<<*punteroarray;
	 punteroarray -=4;
	 cout<<"\n el valor es: "<<*punteroarray;
	 punteroarray +=6;
	 cout<<"\n el valor es: "<<*punteroarray;
	 return 0;
	 getch();
	 getch();	
}
