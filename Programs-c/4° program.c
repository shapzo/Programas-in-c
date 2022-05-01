/******************
 *
 * Program that calculates the radians and degrees of a number
 *
 * ****************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float a,e,d,k,l,r,j,w;
    float const PI=3.14159265358979;
    char seguir;

 int main(){
 	int op;
 	do{
 		printf("---------------Function program---------------\n\n");
 	
 			printf("Type a number: \n");
            scanf("%f",&d);
            
            e=d*d;
            w=sin(d);
            a=(w/(e-4));
            r=a/1;
            j=r*(180/PI);

            printf("The result in radians is: %f\n",a);
            printf("The result in degrees is: %f\n",j); 
            
            getchar();
            printf( "\n\nYou want to enter another number (s/n)?: \n" );
            fflush(stdin);
            scanf("%c", &seguir);
           
	 }while ( seguir != 'n' );
	 return 0;
	 }