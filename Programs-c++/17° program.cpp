/******************
 *
 * Order the letters to print the word on the screen: popocatepetl
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
	* system("color 9A");  
	*/

	char arreglo[15] = {'a', 'b', 'p', 'a', 't', 'r', 'k', 'h', 'e', 'w', 'l', 'c', 's', 'o'};
	char *pointerarray = &arreglo[0];

	pointerarray += 2;
	cout << "\nThe value is: " << *pointerarray;
	pointerarray += 11;
	cout << "\nThe value is: " << *pointerarray;
	pointerarray -= 11;
	cout << "\nThe value is: " << *pointerarray;
	pointerarray += 11;
	cout << "\nThe value is: " << *pointerarray;
	pointerarray -= 2;
	cout << "\nThe value is: " << *pointerarray;
	pointerarray -= 8;
	cout << "\nThe value is: " << *pointerarray;
	pointerarray++;
	cout << "\nThe value is: " << *pointerarray;
	pointerarray += 4;
	cout << "\nThe value is: " << *pointerarray;
	pointerarray -= 6;
	cout << "\nThe value is: " << *pointerarray;
	pointerarray += 6;
	cout << "\nThe value is: " << *pointerarray;
	pointerarray -= 4;
	cout << "\nThe value is: " << *pointerarray;
	pointerarray += 6;
	cout << "\nThe value is: " << *pointerarray;

	getchar();
    return 0;
}
