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
    int arreglo[12] = {8, 4, 7, 6, 3, 21, 17, 44, 0, 42, 93, 108};
    int *pointerarray = &arreglo[0];

    pointerarray += 4;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray -= 2;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray--;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 5;
    cout << "\nThe value is: " << *pointerarray;
    pointerarray += 4;
    cout << "\nThe value is: " << *pointerarray;

    return 0;
    getchar();
}
