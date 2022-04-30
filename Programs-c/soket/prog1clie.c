// Programa C / C ++ del lado del cliente para demostrar la programación de Socket
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#define PORT 1723
   
int main(int argc, char const *argv[])
{
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    char *hello = "hola sho soy el cliente";
    char buffer[1024] = {0};
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\n error en la creacion del soket \n");
        return -1;
    }
   
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
       
    // Convierta direcciones IPv4 e IPv6 de texto a formato binario
    if(inet_pton(AF_INET, "25.114.191.143", &serv_addr.sin_addr)<=0) 
    {
        printf("\nInvalido no esta soportado, vuelve a intentar \n");
        return -1;
    }
   
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        printf("\nconeccion fallida \n");
        return -1;
    }
    send(sock , hello , strlen(hello) , 0 );
    printf("hola, ya nos conectamos !!!\n");
    valread = read( sock , buffer, 1024);
    printf("%s\n",buffer );
    return 0;
}
