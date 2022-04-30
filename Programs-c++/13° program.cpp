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
    int arreglo[10] = {5, 46, 100, 24, 20, 18, 50, 98, 15, 42};
    int *pointerarray = &arreglo[0];

    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 8;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 3;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray--;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray--;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 6;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 8;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray++;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 5;
    cout << "\nThe value is: " << *pointerarray;

    return 0;
    getchar();
}
