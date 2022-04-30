/******************
 *
 * Order the letters to print the word on the screen: Estacionamiento
 *
 * ****************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    /* 
	* uncomment if you are in windows, so that the cmd or powershell console changes color XD
    * system("color 02");
    */
   
    char arreglo[20] = {'e', 's', 'm', 'l', 'c', 't', 'r', 'd', 'i', 'o', 'm', 'z', 'a', 'b', 'h', 'n', 'g', 'f', 'k', 'p'};
    char *pointerarray = &arreglo[0];

    cout << "\nThe value is: " << *pointerarray;
    pointerarray++;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 4;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 7;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 8;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 4;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray++;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 6;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 2;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 2;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 8;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 15;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 10;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 4;
    cout << "\nThe value is: " << *pointerarray;

    getchar();
    return 0;
}
