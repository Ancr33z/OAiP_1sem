#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float p, q, r, rhombusr;
    printf("%s", "Введите диагонали ромбовидного отверстия p, q: ");
    //cout << "Введите диагонали ромбовидного отверстия p, q: " << endl;
    scanf_s("%f%f", &p, &q );
    //cin >> p >> q;
    printf("%s", "Введите радиус шара r: ");
    //cout << "Введите радиус шара r: " << endl;
    scanf_s("%f", &r);
    //cin >> r;

    rhombusr = p * q / (2 * sqrt(pow(p, 2) + pow(q, 2))); //расчёт радиуса ромба

    if (rhombusr > r) {
        cout << "Шар сможет пройти" << endl;
    }
    else {
        cout << "Шар не сможет пройти" << endl;
    }
    return 0;
}

