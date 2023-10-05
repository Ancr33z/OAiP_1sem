#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float a, b, c, r, s, t;
    printf("Введите размер коробки: ");
    scanf_s("%f%f%f", &a, &b, &c);   
    printf("Введите размер посылки: ");
    scanf_s("%f%f%f", &r, &s, &t);

    //Дальше идёт сравнение сторон коробки и посылки
    if (((a > r) && (b > s) && (c > t)) || ((a > r) && (b > t) && (c > s)) || ((a > s) && (b > r) && (c > t)) || ((a > s) && (b > t) && (c > r)) || ((a > t) && (b > s) && (c > r)) || ((a > t) && (b > r) && (c > s))) {
        printf("Коробка не влезет\n");

    }
    else {
        printf("Коробка влезет\n");
    }
    return 0;
}
#include <iostream>

int main() {
    double a, b, c, r, s, t;

    // Введите размеры коробки a, b и c
    printf("Введите размеры коробки (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Введите размеры посылки r, s и t
    printf("Введите размеры посылки (r s t): ");
    scanf("%lf %lf %lf", &r, &s, &t);

    // Проверяем, можно ли упаковать коробку в посылку без углового укладывания
    if ((a <= r && b <= s && c <= t)||
        (a <= r && b <= t && c <= s)||
        (a <= s && b <= r && c <= t)||
        (a <= s && b <= t && c <= r)||
        (a <= t && b <= r && c <= s)||
        (a <= t && b <= s && c <= r)) {
        printf("Коробка влезет.\n");
    }
    else {
        printf("Коробка не влезет\n");
    }

    return 0;
}