//programa 21
//seno, coseno, tangente
//Rodrigo Palma Garcia
#include<iostream>
#include<conio.h>
#include<windows.h>
#include <math.h>
#define pi 3.1416
using namespace std;
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
int main ()
{
	int w;
	int op;
	
		system ("cls");
	    gotoxy(30,5);cout<<"numero    seno:           coseno:          tangente:";
		for(w=1;w<=20;w++){
			
		gotoxy(30,6+w);cout<<w;
		gotoxy(40,6+w);cout<<sin(w)*pi/180;
		gotoxy(55,6+w);cout<<cos(w)*pi/180;
		gotoxy(70,6+w);cout<<tan(w)*pi/180;}
		getch();
	}// fin del main 
	

