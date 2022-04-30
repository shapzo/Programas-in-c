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
    int arreglo[14] = {1, 0, 5, 6, 8, 9, 10, 12, 14, 16, 17, 26, 30, 40};
    int *pointerarray = &arreglo[0];

    pointerarray += 12;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 12;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 2;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 2;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 6;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 7;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 10;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 12;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 2;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 8;
    cout << "\nThe value is: " << *pointerarray;

    getchar();
    return 0;
}
