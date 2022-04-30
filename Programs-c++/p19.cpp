#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void metros(float x){
float met=0;
met=(x*1000);
cout<<"el valor en metros es:"<<met;
}
main(){
float a;
cout<<"introduce los km:";
cin>>a;
metros(a);
getch();
}
