#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float a, b, c, r, s, t;
    printf("%s", "Введите размер коробки: ");
    scanf_s("%f%f%f", &a, &b, &c);   
    printf("%s", "Введите размер посылки: ");
    scanf_s("%f%f%f", &r, &s, &t);

    //Дальше идёт сравнение сторон коробки и посылки
    if (((a > r) && (b > s) && (c > t)) || ((a > r) && (b > t) && (c > s)) || ((a > s) && (b > r) && (c > t)) || ((a > s) && (b > t) && (c > r)) || ((a > t) && (b > s) && (c > r)) || ((a > t) && (b > r) && (c > s))) {

        cout << "Коробка не влезет" << endl;
    }
    else {
        cout << "Коробка влезет" << endl;
    }
    return 0;
}