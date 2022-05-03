#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void intercambio ( int &x, int &y)
{
	int aux=x;
	x=y;
	y=aux;
}

void ordinsercion(int a[],int n){
	int i,j,aux;
	for(i=1;i<n;i++){
	
	j=i;
	int aux=a[i];
	aux=a[i];
	while (j>0 && aux<a[j-1])
	{
		a[j]=a[j-1];
		j--;
		}
		a[j]=aux;
	}
}

void imprimirlista(int a[],int n){
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}

main(){
	system("color 7b");
	int lista[14]={58,42,31,10,32,8,7,52,21,44,33,22,11,10};
	cout<<endl<<"lista original \n"<<endl;
	imprimirlista(lista,14);
	ordinsercion(lista,14);
	cout<<endl<<"lista ordenada"<<endl;
	imprimirlista(lista,14);
	getch();
	
}

