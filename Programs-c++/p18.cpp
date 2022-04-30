#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void miligramos(float x){
float mili=0;
mili=(x*0.001);
cout<<"\n el valor en miligramos es:"<<mili;
}
void centigramos(float x){
float cent=0;
cent=(x*0.01);
cout<<"\n el valor en centigramos es:"<<cent;
}
void desigramos(float x){
float desi=0;
desi=(x*0.1);
cout<<"\n el valor en desigramos es:"<<desi;
}
void ectogramos(float x){
float ect=0;
ect=(x*100);
cout<<"\n el valor en ectogramos es:"<<ect;
}
void decagramos(float x){
float dec=0;
dec=(x*10);
cout<<"\n el valor en decagramos es:"<<dec;
}
main(){
float a;
cout<<"introduzca el valor en kg:";
cin>>a;
miligramos (a);
centigramos (a);
desigramos (a);
ectogramos (a);
decagramos (a);
getch();
}
