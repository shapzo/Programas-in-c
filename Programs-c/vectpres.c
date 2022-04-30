#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int* p;
int* q;
int* w;
int* z;
int* m;

int i,d,x,s,a,j,f;
char seguir;
char resp;
char caracter;

void vector1(){
	printf("--------Vector numeo 1--------------\n");
	printf("--------Ingrese la cantidad de numeros a almacenar:--------------\n");
if(scanf("%d||%f",&a)==1){


p = (int*)malloc(a*sizeof(int)); //Rservando memoria para la cantidad de enteros deseados
        for(i=0; i<a; i++){
            printf("Ingrese valor %d :", i+1);
            if(scanf("%d||%f", &p[i])==1){
            }
            else{
             
             system("clear");
             printf("\n\n\n error no se admiten letras y numeros decimales\n\n");
         	seguir = 'n';
                getchar();
                scanf( "%c", &seguir);
                
               
                    getchar();
                    scanf( "%c", &seguir); 
		 }
        }

           for(i=0;i<a;i++){
		 printf("\nValor [%d] en localidad de memoria %p: %d",i+1,&p[i],p[i]);		
		}
		
		getchar();
                printf( "\n--------presione tecla enter para continuar con el vector 2: \n\n" );
                    scanf( "%c", &seguir);
                     
}
}

void vector2(){
	
printf("--------Vector numero 2--------------\n");
printf("--------Ingrese la cantidad de numeros a almacenar:--------------\n");
if(scanf("%d||%f",&a)==1){


q = (int*)malloc(a*sizeof(int)); //Rservando memoria para la cantidad de enteros deseados
        for(i=0; i<a; i++){
            printf("Ingrese valor %d :", i+1);
            if(scanf("%d||%f", &q[i])==1){
            }
            else{
             
             system("clear");
             printf("\n\n\n error no se admiten letras y numeros decimales\n\n");
         	seguir = 'n';
                getchar();
                scanf( "%c", &seguir);
                
               
                    getchar();
                    scanf( "%c", &seguir); 
		 }
        }
        
           for(i=0;i<a;i++){
		 printf("\nValor [%d] en localidad de memoria %p: %d",i+1,&q[i],q[i]);		
		}
		
		getchar();
                printf( "\n--------presione tecla enter para continuar con la suma : \n\n" );
                    scanf( "%c", &seguir);
                     
}
}

void suma(){
	printf("--------Vector numero 3--------------\n");
	printf("--------a continuacion se hace la suma de vector 1 mas el vector 2--------------\n");
	w = (int*)malloc(a*sizeof(int));
     for(i=0;i<a;i++){
 
      w[i]=p[i]+q[i];
    }
    
    FILE*archivo;
	if((archivo=fopen("Vector Suma.txt","w+"))==NULL){
		printf("Archivo no pudo abrirse");}
	else{
		fprintf(archivo, "%s", "\tResultado de la suma del vector 1 y 2 es: \n\n");
		for(i=0; i<a; i++){	
		fprintf(archivo,"\t%d ",w[i]);}
		fclose(archivo);
		}
		
		 for(i=0;i<a;i++){
		 printf("\nValor [%d] en localidad de memoria %p: %d",i+1,&w[i],w[i]);		
		}
		
		
            printf( "\n--------presione tecla enter para continuar con el vector 4: \n\n" );
                scanf( "%c", &seguir);

}

void vector4(){
		printf("--------Vector numero 4--------------\n");
	printf("--------Ingrese la cantidad de numeros a almacenar:--------------\n");
if(scanf("%d||%f",&a)==1){


z = (int*)malloc(a*sizeof(int)); //Rservando memoria para la cantidad de enteros deseados
        for(i=0; i<a; i++){
            printf("Ingrese valor %d :", i+1);
            if(scanf("%d||%f", &z[i])==1){
            }
            else{
             
             system("clear");
             printf("\n\n\n error no se admiten letras y numeros decimales\n\n");
         	seguir = 'n';
                getchar();
                scanf( "%c", &seguir);
                
               
                    getchar();
                    scanf( "%c", &seguir); 
		 }
        }
        
        
           for(i=0;i<a;i++){
		 printf("\nValor [%d] en localidad de memoria %p: %d",i+1,&z[i],z[i]);		
		}
		
		getchar();
                printf( "\n--------presione tecla enter para continuar con el resta: \n\n" );
                    scanf( "%c", &seguir);
                     
}
	
}

void resta(){
	printf("--------Vector numero 5--------------\n");
	printf("--------a continuacion se hace la resta del vector 3 o suma menos el vector 4--------------\n");
	m = (int*)malloc(a*sizeof(int));
     for(i=0;i<a;i++){
 
      m[i]=w[i]-z[i];
    }
    
    FILE*archivo2;
	if((archivo2=fopen("Vector Resta.txt","w+"))==NULL){
		printf("Archivo no pudo abrirse");}
	else{
		fprintf(archivo2, "%s", "\tResultado de la resta del vector suma y vector  4 es: \n\n");
		for(i=0; i<a; i++){
		fprintf(archivo2,"\t%d ",m[i]);}
		fclose(archivo2);
		}
		
		 for(i=0;i<a;i++){
		 printf("\nValor [%d] en localidad de memoria %p: %d",i+1,&m[i],m[i]);		
		}
		
		
            printf( "\n--------presione tecla enter para continuar con el modulo: \n\n" );
                scanf( "%c", &seguir);

	
}

void modulo(){
	printf("--------Vector numero 6--------------\n");
	printf("--------a continuacion se hace el modulo del vector resta--------------\n");
	
	int f; f=0; 
      for(j=0; j<a; j++){
			f=f+(m[i]*m[i]);
		}
      
      float r; r=0;
	  r=sqrt(f);
    
    FILE*archivo3;
	if((archivo3=fopen("Vector Modulo.txt","w+"))==NULL){
		printf("Archivo no pudo abrirse");}
	else{
		fprintf(archivo3, "%s", "\tResultado del modulo es: \n\n");
		for(i=0; i<a; i++){
		fprintf(archivo3,"\t%.2f ",r);}
		fclose(archivo3);
		}
		
		
printf("Presione Enter para eliminar y continuar.");
		getchar();
		
        if(remove("Vector Modulo.txt")==0) 
        printf("\n------El TXT vector modulo fue borrado-----\n");
    else{
        printf("No se pudo eliminar el archivo\n");}
        
  
        printf( "\n--------presione tecla enter para continuar ------------- \n\n" );
                scanf( "%c", &seguir);
       
}

int main(){
    system("cls");
	do{
	
	vector1();
	vector2();
	system("cls");
	suma();
	vector4();
	resta();
	system("cls");
	modulo();
	
	printf("\n------------Presione cualquier tecla para volver a saturar tu memoria de lo contrario presione la tecla (n) minuscula----------");
		resp=getchar();
       }while(resp !='n');

	free(p);
	free(q);
	free(w);
	free(z);
	free(m);
	
	return 0;
	
}