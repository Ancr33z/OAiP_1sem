#include <iostream>
using namespace std;
double fmax(bool isInt, int n, ...)
    {
    if (isInt)
    {
        int* p = &n;
        int min = 10000;

        for (int i = 0; i < n; i++)
        {
            *(++p);
            *(++p);
            if (*p < min)
                min = *p;

        }

        return min;
    }
    else {
        int* p = &n;
        double* s = reinterpret_cast<double*>(p);

        double min = 10000;
        *(s++);
        for (int i = 0; i < n; i++, s++)
        {
            if (*s < min)
                min = *s;
        }
        return min;
    };
}

void main()
{
    cout << "int min:" << endl;
    cout << fmax(true, 8, 5, 8, 3, 12, 1, -1, 3, 5) << endl;

    cout << "int min:" << endl;
    cout << fmax(true, 2, 8, -3) << endl;

    cout << "int min:" << endl;
    cout << fmax(true, 4, 8, 2, 6, 9) << endl;

    cout << "double min:" << endl;
    cout << fmax(false, 5, -3.9, 1.1, 2.6, 4.6, 5.2) << endl;

    cout << "double min:" << endl;
    cout << fmax(false, 6, 1.9, 2.1, 1.8, 1.1, -1.1, -2.1) << endl;

    cout << "double min:" << endl;
    cout << fmax(false, 3, 1.1, 1.2, 0.5) << endl;
}