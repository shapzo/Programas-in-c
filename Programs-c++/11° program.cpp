/******************
 *
 * Program that calculates basic operations with functions
 *
 * ****************/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void addition(float x, float y)
{
    float addition = 0;
    addition = x + y;
    cout << "\nThe result is: " << addition;
}

void subtraction(float x, float y)
{
    float subtraction = 0;
    subtraction = x - y;
    cout << "\nThe result is: " << subtraction;
}

void mult(float x, float y)
{
    float mult = 0;
    mult = x * y;
    cout << "\nThe result is: " << mult;
}

void divicion(float x, float y)
{
    float divicion = 0;
    divicion = x / y;
    cout << "\nThe result is: " << divicion;
}

int main()
{
    float a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    addition(a, b);
    subtraction(a, b);
    mult(a, b);
    divicion(a, b);
    getchar();
}
