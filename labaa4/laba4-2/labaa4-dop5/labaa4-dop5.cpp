#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float p, q, r, rhombusr;

    printf("Введите диагонали p, q: ");
    scanf_s("%f%f", &p, &q );

    printf("Введите радиус шара r: ");
    scanf_s("%f", &r);

    rhombusr = p * q / (2 * sqrt(pow(p, 2) + pow(q, 2)));

    if (rhombusr > r) {
        printf("Шар сможет пройти\n");
    }
    else {
        printf("Шар не сможет пройти\n");
    }
    return 0;
}

