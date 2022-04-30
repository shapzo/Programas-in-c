/******************
 *
 * Order the letters to print the word on the screen: desoxirribonucleico
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
    * system("color 24");
    */

    char arreglo[14] = {'o', 'b', 'e', 'd', 'i', 's', 'n', 'x', 'a', 'r', 'l', 'q', 'c', 'u'};
    char *pointerarray = &arreglo[0];

    pointerarray += 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray--;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 7;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 0;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray--;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 6;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 7;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray--;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 2;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 8;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 2;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 8;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 12;
    cout << "\nThe value is: " << *pointerarray;

    getchar();
    return 0;
}
