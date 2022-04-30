#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float a,e,d,k,l,r,j,w;
    float const PI=3.14159265358979;
    char seguir;

 int main(){
 	int op;
 	do{
 		printf("\n\n\n---------------Programa de funcion---------------");
 	
 			printf("\n\nTeclea un numero: ");
            scanf("%f",&d);
            

            e=d*d;
            w=sin(d);
            a=(w/(e-4));

            r=a/1;
            j=r*(180/PI);


            printf("     El resultado en radianes es: %f\n",a);
            printf("     El resultado en grados es: %f\n",j); 
            
            printf( "\n   Desea introducir otro numero (s/n)?: " );
      fflush( stdin );
      scanf( "%c", &seguir);
           
	 }while ( seguir != 'n' );
	 return 0;
	 }


/*** pasenlo al gcc   para hacerlo copien el codigo luego le agregan la extencion .c   y lo compilan segun yo ya esta*/