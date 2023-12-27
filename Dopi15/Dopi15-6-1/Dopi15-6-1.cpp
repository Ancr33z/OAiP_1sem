#include <iostream>
#include <cmath>

float my_func(float x) {
    return (1 + pow(x, 3));
}


float integrate(float (*func)(float), float a, float b, int n) {
    float h = (b - a) / (2 * n);
    float x = a + 2 * h;
    float s1 = 0;
    float s2 = 0;
    float i = 1;

    do {
        s2 = s2 + func(x);
        x = x + h;
        s1 = s1 + func(x);
        x = x + h;
        i += 1;
    } while (i < n);

    return h / 3 * (func(a) + 4 * func(h + a) + 4 * s1 + 2 * s2 + func(b));
}

int main() {
    setlocale(LC_ALL, "RUS");
    float a, b;
    int n;

    std::cout << "Введите значение a: ";
    std::cin >> a;

    std::cout << "Введите значение b: ";
    std::cin >> b;

    std::cout << "Введите значение n: ";
    std::cin >> n;


    float (*func_ptr)(float) = &my_func;


    float (*integrate_ptr)(float (*F)(float), float, float, int) = &integrate;

    float result = integrate_ptr(func_ptr, a, b, n);

    std::cout << "Результат интегрирования: " << result << std::endl;

    return 0;
}