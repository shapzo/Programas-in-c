/******************
 *
 * Program that calculates the square the cube and the square root of a number with functions
 *
 * ****************/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void cube(float x)
{
    float cube = 0;
    cube = pow(x, 3);
    cout << "\nThe number cube is: " << cube;
}

void square(float x)
{
    float square = 0;
    square = pow(x, 2);
    cout << "\nThe number squared is: " << square;
}

void root(float x)
{
    float root = 0;
    root = sqrt(x);
    cout << "\nThe number root is: " << root;
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    
    cube(a);
    square(a);
    root(a);
    
    getchar();
}
