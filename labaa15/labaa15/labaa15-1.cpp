#include <iostream>
using namespace std;

float Integ(float(*) (float), float, float, float);
float F(float);


int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b, x, n, z;
    printf("Введите переменные a,b,n");
    scanf_s("%f%f%f", &a, &b, &n);
    z = Integ(F, a, b, n);
    printf("Интеграл = %f", z);
}
float Integ(float(*f) (float), float a, float b, float n) {
    float x, s1, s2, h;
    int i;

    h = (b - a) / (2 * n);
    x = a + 2 * h;
    s1 = 0;
    s2 = 0;
    i = 1;
    do {
        s1 += F(x);
        x += h;
        s2 += F(x);
        x += h;
        i++;
    } while (i < n);
    
    return h / 3 * (F(a) + 4 * F(a + h) + 4 * s1 + 2 * s2 + F(b));

}
float F(float x) {
    return pow(cos(x), 3);
}