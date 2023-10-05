#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float p, q, r, rhombusr;

    printf("%s", "Введите диагонали p, q: ");
    scanf_s("%f%f", &p, &q );

    printf("%s", "Введите радиус шара r: ");
    scanf_s("%f", &r);

    rhombusr = p * q / (2 * sqrt(pow(p, 2) + pow(q, 2))); //расчёт радиуса ромба

    if (rhombusr > r) {
        printf("Шар сможет пройти\n");
    }
    else {
        printf("Шар не сможет пройти\n");
    }
    return 0;
}

