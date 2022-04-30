/******************
 *
 * Compare 3 numbers, if they are greater than or equal
 *
 * ****************/

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{

    int x, y, z;

    cout << "Enter a number: ";
    cin >> x;
    cout << "\nEnter a number: ";
    cin >> y;
    cout << "\nEnter a number: ";
    cin >> z;

    if ((y < x) && (z < x))
    {
        cout << "The oldest is :" << x;
    }
    else if ((x < y) && (z < y))
    {
        cout << "The oldest is :" << y;
    }
    else if ((x < z) && (y < z))
    {
        cout << "The oldest is :" << z;
    }
    else if ((x = y) && (x = z) && (y = z))
    {
        cout << " They are equal ";
    }

    getchar();
    return 0;
}
