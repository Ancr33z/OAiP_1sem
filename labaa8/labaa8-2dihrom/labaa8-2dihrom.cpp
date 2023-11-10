#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int main()
{
    double a = 4, b = 7, e = 0.0001, x;
    do
    {
        x = (a + b) / 2;
        if ((cos(x) + x - 7) * (cos(a) + a - 7) <= 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
    } while (abs(a - b) > 2 * e);
    cout << x;
}