﻿#include<iostream> 
#include<math.h>

using namespace std;

float Integ(float(*) (float), float, float, float);
float F(float);

int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b, x, n, z;

    cout << "Введите a:";
    cin >> a;

    cout << "Введите b:";
    cin >> b;

    cout << "Введите n:";
    cin >> n;

    z = Integ(F, a, b, n);
    cout << "Integral=" << z << endl;
}

float Integ(float(*F) (float), float a, float b, float n) {
    float x, s1, s2, h;
    int i;
    h = (b - a) / (2 * n);
    x = a + 2 * h;
    s1 = 0;
    s2 = 0;
    i = 1;

    for (i; i < n; i++) {
        s2 = s2 + F(x);
        x = x + h;
        s1 = s1 + F(x);
        x = x + h;
    }
    return h / 3 * (F(a) + 4 * F(a + h) + 4 * s1 + 2 * s2 + F(b));
}
float F(float x) {
    return (1 + pow(x, 3));
}