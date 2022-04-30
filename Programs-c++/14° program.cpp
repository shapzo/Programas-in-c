/******************
 *
 * Program with pointers:
 *
 * ****************/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arreglo[9] = {0, 30, 70, 10, 99, 2, 20, 40, 90};
    int *pointerarray = &arreglo[0];

    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 6;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 6;
    cout << "\nThe value is: " << *pointerarray;

    return 0;
    getchar();
}
