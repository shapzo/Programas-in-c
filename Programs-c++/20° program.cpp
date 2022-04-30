/******************
 *
 * Order the letters to print the word on the screen: programacion avanzada
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
    * system("color 3b");
    */

    char arreglo[25] = {'u', 't', 'i', 'l', 'y', 'z', 'v', 's', 'e', 'q', 'n', 'k', 'j', 'a', 'd', 'p', 'o', 'f', 'm', 'g', 'h', 'c', 'r', 'b', 't'};
    char *pointerarray = &arreglo[0];

    pointerarray += 15;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 7;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 6;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 9;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 8;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 19;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 14;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 6;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 7;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 7;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 8;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray++;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray--;

    getchar();
    return 0;
}
