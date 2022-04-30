/******************
 *
 * A worker's salary is deducted from 3 or 9 percent of his salary depending on how much he earns
 *
 * ****************/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c, d, x;

    cout << "Type the worker's salary: ";
    cin >> a;

    if (a > 2500)
    {
        b = a * .03;
        d = a - b;
        cout << "3% was deducted from your salary: " << d;
    }
    else if (a < 2500)
    {
        c = a * .09;
        x = a - c;
        cout << "9% was deducted from your salary: " << x;
    }

    getchar();
}
