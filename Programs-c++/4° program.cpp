/******************
 *
 * Compare 2 numbers, if they are greater than or equal
 *
 * ****************/

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{

    int x, y;

    cout << "Enter a number :";
    cin >> x;
    cout << "\nEnter a number :";
    cin >> y;

    if (y < x)
    {
        cout << "The oldest is :" << x;
    }
    else if (x < y)
    {
        cout << "The oldest is :" << y;
    }
    else if ((x = y) && (y = x))
    {
        cout << " They are equal ";
    }

    getchar();
}
