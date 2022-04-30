/******************
 *
 * Calculate the square and cube of 2 numbers
 *
 * ****************/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    float a, c, q;
    cout << "Enter a number: ";
    cin >> a;

    c = pow(a, 2);
    q = pow(a, 3);

    cout << "\n the number: " << a << " squared is: " << c;
    cout << "\n the number: " << a << " cubed is: " << q;
    
    getchar();
    return 0;
}
