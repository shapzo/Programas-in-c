#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

int main()
{

    int w, n, x;
    gotoxy(20, 1);
    cout << "Enter the number of lines desired:";
    cin >> x;

    for (w = 1; w <= x; w++)
    {
        for (n = 1; n <= x - w; n++)
        {
            cout << " ";
        }
        for (n = 1; n <= 2 * w - 1; n++)
        {
            cout << "$";
        }
        cout << "\n";
    }
}