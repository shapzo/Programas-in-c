/***************
 *
 * Program that calculates the average of 3 grades
 *
 * ************/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int x, y, z, e, r;

    cout << "\nEnter the first grade :";
    cin >> x;
    cout << "\nEnter the second grade :";
    cin >> y;
    cout << "\nEnter the third rating :";
    cin >> z;

    e = x + y + z;
    r = e / 3;

    cout << "The average is :" << r;
}
