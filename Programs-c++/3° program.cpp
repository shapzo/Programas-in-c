/******************
 *
 * Calculate the square and cube of a number
 *
 * ****************/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{

    int x, y, z;
    
    cout << "Enter a number: ";
    cin >> x;

    y = pow(x, 2);
    z = pow(x, 3);

    cout << "\n The number squared is :" << y;
    cout << "\n The number cubed is :" << z;
}
