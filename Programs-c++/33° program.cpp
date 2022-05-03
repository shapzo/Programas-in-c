#include<iostream>
#include<conio.h>
using namespace std;
void intercambio(int &x, int &y){
	int aux=x;
	x=y;
	y=aux;
}
void burbuja(int a[], int n){
	int i,j;
	int indiceintercambio;
	i=n-1;
	while(i>0){
	indiceintercambio=0;
	for(j=0;j<i;j++)
	if(a[j+1]<a[j]){
		intercambio(a[j],a[j+1]);
		indiceintercambio=j;
	}	
	i=indiceintercambio;
	}
}
void imprimirlista(int a[], int n){
	for(int i=0;i<n;i++)
	cout<<a[i]<<"     "<<endl;
}
main(){
	int lista[5]={10,50,84,62,45};
	cout<<"lista original \n";
	imprimirlista(lista,5);
	burbuja(lista,5);
	cout<<endl<<"lista ordenada"<<endl;
	imprimirlista(lista,5);
}

