/******************
 *
 * Increase 8% of a worker's salary
 *
 * ****************/

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{

    int y, s, j;
    char x[20];

    cout << "Enter the name of the worker: ";
    cin >> x;
    cout << "Enter your salary: ";
    cin >> y;

    s = y * .08;
    j = s + y;

    cout << "\nEmployee's name: " << x;
    cout << "\nWorker salary: " << j;

    getchar();
    return 0;
}
