/******************
 *
 * Sort the numbers to print the figure on the screen: 3 7 4 17 93
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

    getchar();
    return 0;
}
