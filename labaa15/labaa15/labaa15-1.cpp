#include <iostream>
using namespace std;

float integ(float(*) (float), float, float, float);
float f(float);

int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b, n, z;
    printf("Введите переменные a,b,n: ");
    scanf_s("%f%f%f", &a, &b, &n);
    z = integ(*f, a, b, n);
    printf("Интеграл = %f", z);
}
float integ(float(*f) (float), float a, float b, float n) {
    float x, s1, s2, h;
    int i;

	h = (b - a) / (2 * n);
	x = a + 2 * h;
	s1 = 0;
	s2 = 0;
	i = 1;
	do {
		s2 = s2 + pow(cos(x), 3);
		x = x + h;
		s1 = s1 + pow(cos(x), 3);
		x = x + h;
		i++;
	} while (i < n);
    
	return h / 3 * (f(a) + 4 * f(a + h) + 4 * s1 + 2 * s2 + f(b));

}
float f(float x) {
    return pow(cos(x), 3);
}