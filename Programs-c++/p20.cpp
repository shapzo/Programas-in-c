#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void calificacion(float a, float b, float c, float d, float e, float f, float g, float h){
float cal=0;
cal=((a+b+c+d+e+f+g+h)/8);
if (cal<6){
cout<<"el alumno esta reprovado";
}
else if(cal>=6){
cout<<"el alumno esta aprovado";
}
}
main(){
float i, j, k, l, m, n, o, p;
cout<<"intoduzca la calificacion 1:";
cin>>i;
cout<<"intoduzca la calificacion 2:";
cin>>j;
cout<<"intoduzca la calificacion 3:";
cin>>k;
cout<<"intoduzca la calificacion 4:";
cin>>l;
cout<<"intoduzca la calificacion 5:";
cin>>m;
cout<<"intoduzca la calificacion 6:";
cin>>n;
cout<<"intoduzca la calificacion 7:";
cin>>o;
cout<<"intruduzca la calificacion 8:";
cin>>p;
calificacion(i, j, k, l, m, n, o, p);
getch();
}

