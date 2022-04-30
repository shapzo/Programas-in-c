#include <stdio.h>
#include <stdlib.h>


	int* num;
int i,n,s, a;

int main()
{

printf("Ingrese la cantidad de datos para almacenar:\n");
scanf("%d",&a);


num = malloc(sizeof(int)*a); //Rservando memoria para la cantidad de enteros deseados
        for(i=0; i<a; i++){
            printf("Ingrese valor %d :", i+1);
            scanf("%d", &num[i]);
        }

           for(i=0;i<a;i++){
		 printf("Valor [%d] en localidad de memoria %p: %d\n",i+1,&num[i],num[i]);		
		}

       free(num);
      
       for(i=0;i<s;i++){
       	 printf("Liberacion de localidad %p, estado actual: %p\n",&num[i], num[i]);
	   }
      
       
    return 0;
}
